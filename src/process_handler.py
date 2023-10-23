import os
def close_windows():

    os.system(f"taskkill /f /im saplogon.exe")
    os.system(f"taskkill /f /im excel.exe")

def open_excel_file(file_path):
    os.system(f'start excel "{file_path}"')