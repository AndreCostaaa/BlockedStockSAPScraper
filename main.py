import os

from blocked_stock import DbHandler

from config import load_config

from data_fetcher import fetch_data_wait


def copy_data(source_data, dest_file, sheet_name, dest_start_row, dest_start_column):

    dest_sheet = dest_file[sheet_name]
    mc = dest_sheet.max_column
    over = False
    i = dest_start_row
    for obj in source_data:
        j = dest_start_column
        for _, value in obj.items():
            dest_sheet.cell(row=i, column=j).value = value
            j += 1
        i += 1

    while not over:
        for j in range(dest_start_column, mc + 1):
            val = dest_sheet.cell(row=i, column=j).value
            if not val:
                over = True
                break
            dest_sheet.cell(row=i, column=j).value = ""
        i += 1

def close_windows():

    os.system(f"taskkill /f /im saplogon.exe")
    os.system(f"taskkill /f /im excel.exe")

def open_db(file_path):
    os.system(f"start excel {file_path}")

import time
def main():

    config = load_config()
    close_windows()
    time.sleep(1)
    
    db = DbHandler(config.xlsx_db_path)
    curr_blocked_stock = fetch_data_wait(config.sap_path,db.nc_data, db.stock_exit_new)
    db.handle_differences(curr_blocked_stock)
    db.save() 
    close_windows()
    open_db(db.file_path)

if __name__ == "__main__":
    main()