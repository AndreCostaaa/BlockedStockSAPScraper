from process_handler import close_windows, open_excel_file

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



import time
def main():
    config = load_config()
    input("[Script Startup] Les processus SAP et EXCEL vont se fermer. Sauvegardez votre travail et pressez sur ENTER...")
    close_windows()
    time.sleep(1)
    db = DbHandler(config.xlsx_db_path)
 
    curr_blocked_stock = fetch_data_wait(config.sap_path, db)
    close_windows()
    db.handle_differences(curr_blocked_stock)
    db.save() 
    
    open_excel_file(db.file_path)
    

if __name__ == "__main__":
    main()