from dataclasses import dataclass, asdict
import os
from dacite import from_dict
import openpyxl as xl
from openpyxl.worksheet.worksheet import Worksheet
from openpyxl.styles import Font, Alignment

from datetime import datetime
import pickle

from config import ARCHIVED_BIN_PATH, STOCK_BIN_PATH


DATE_TIME_FORMAT = "%Y/%m/%d %H:%M:%S"
RRP_LOCATIONS = {"NX42", "NX72", "SF42"}
CC_LOCATIONS = {"NT01", "NT72"}


def title_to_snake(value:str):
    return value.lower().replace(' ', '_')

def snake_to_tile(value:str):
    return value.replace('_', ' ').title()

def get_date_now():
    return datetime.now().strftime(DATE_TIME_FORMAT)
@dataclass
class BlockedStockLine:
    material:str
    batch:str
    material_description:str
    material_type:str
    plant: str
    storage_location:str
    base_unit_of_measure:str
    blocked:float
    value_blockedstock:float
    currency:str
    type:str
    date_created:str
    date_archived:str
    type:str
    ncf:str
    ncr:str
    resp:str
    provision:str
    step_ncf:str
    comment:str
    stock_exit_type:str
    vendor_id:str
    reason_code:str
    vendor_name:str
    destruction_at_vendor_cost:str
    stock_exit_done:str

class BlockedStock:
    def __init__(self, sheet:Worksheet):
        self.sheet = sheet
        self.blocked_stock: dict[int, list[BlockedStockLine]] = {}
        #self.load_data()

    def parse_data(self):
        mr = self.sheet.max_row
        mc =  self.sheet.max_column

        data = []
        for i in range (2, mr + 1):

            dic = {}
            for j in range (1, mc + 1):

                cell =  self.sheet.cell(row = i, column = j)
                key =  self.sheet.cell(row = 1, column= j).value
                if cell.fill.start_color.index == 13:
                    break
                dic[title_to_snake(key)] = cell.value
            if dic:
                data.append(dic)
        return data
    
    def load_data(self):
        parsed_data = self.parse_data()
        self.blocked_stock = {}
        for obj in parsed_data:
            obj["type"] = ""

            if obj["storage_location"] in RRP_LOCATIONS:
                obj["type"] = "RRP"
            elif obj["storage_location"] in CC_LOCATIONS:
                obj["type"] = "CC"
            
            obj["date_created"] = obj.get("date_created", get_date_now())
            date_archived = obj.get("date_archived", "")

            obj["date_archived"] = date_archived
            obj_id = hash(obj["material"] + obj["batch"])
            obj = from_dict(BlockedStockLine,obj)
            if self.blocked_stock.get(obj_id):
                self.blocked_stock[obj_id].append(obj)
            else:
                self.blocked_stock[obj_id] = [obj]

    def write_data(self):
        if not self.blocked_stock:
            return
        self.sheet.max_row
        self.sheet.delete_rows(1,self.sheet.max_row)

        keys = list(self.blocked_stock.keys())
        j = 1
        
        for key in asdict(self.blocked_stock[keys[0]][0]):
            self.sheet.cell(row=1, column=j).value = snake_to_tile(key)
            j += 1

        i = 2
        for key, lst in self.blocked_stock.items():
            for obj in lst:
                dict_obj = asdict(obj)
                j = 1
                for key, val in dict_obj.items():
                    self.sheet.cell(row=i, column=j).value = val
                    j += 1
                i += 1
    def make_pretty(self):

        title_font = Font(color="00000000", bold=True, sz=16)

        for cell in self.sheet["1:1"]:
            cell.font= title_font
            cell.alignment = Alignment(wrap_text=True)
        self.sheet.auto_filter.ref = self.sheet.dimensions

        '''
        for i in range(1, self.sheet.max_column + 1):
            max_len = len(str(self.sheet.cell(row=1, column=i).value))
            for j in range(2,self.sheet.max_row):
                if not str(self.sheet.cell(row=j, column=i).value):
                    continue
                curr_len = len(str(self.sheet.cell(row=j, column=i).value))
                if curr_len > max_len:
                    max_len = curr_len
            width = (max_len + 2) * 1.2
            self.sheet.column_dimensions[xl.utils.get_column_letter(i)].width = width   
'''
        



class DbHandler:

    def __init__(self, file_path:str):
        self.file_path = file_path
        self.workbook = xl.load_workbook(file_path)
        self.current = BlockedStock(self.workbook["CurrentBlockedStock"])
        self.archive = BlockedStock(self.workbook["Archive"])
        self.current.load_data()
        self.archive.load_data()
        '''
        if os.path.exists(STOCK_BIN_PATH):
            self.current.blocked_stock = pickle.load(open(STOCK_BIN_PATH, "rb"))
        else:
            self.current.load_data()
        if os.path.exists(ARCHIVED_BIN_PATH):
            self.archive.blocked_stock = pickle.load(open(ARCHIVED_BIN_PATH, "rb"))
        else:
            self.current.load_data()
        '''

    def handle_differences(self, new_blocked_stock:BlockedStock):
        
        for key, lst in self.current.blocked_stock.items():
            #stock gone
            if key not in new_blocked_stock.blocked_stock:
                if key in self.archive.blocked_stock:
                    print(self.archive.blocked_stock[key])
                
                for obj in lst:
                    obj.date_archived = get_date_now()
                self.archive.blocked_stock[key] = lst

        for key, lst in new_blocked_stock.blocked_stock.items():
            for i, obj in enumerate(lst):
                if key not in self.current.blocked_stock:
                    continue
                obj.date_created = self.current.blocked_stock[key][i].date_created
    
        self.current.blocked_stock = new_blocked_stock.blocked_stock
        
        
    def save(self, file_path:str = ""):

        for sheet in [self.current, self.archive]:
            sheet.write_data()
            sheet.make_pretty()
        
        pickle.dump(self.current.blocked_stock, open(STOCK_BIN_PATH, "wb"),protocol=-1)
        pickle.dump(self.archive.blocked_stock, open(ARCHIVED_BIN_PATH, "wb"),protocol=-1)

        if not file_path:
            file_path = self.file_path
            
        self.workbook.save(self.file_path)


def get_current_stock(data_path):
    file = xl.load_workbook(filename=data_path, read_only=True)
    sheet = file["Sheet1"]
    stock = BlockedStock(sheet)
    stock.load_data()
    return stock