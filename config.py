import os
from dataclasses import dataclass
import pickle

STOCK_BIN_PATH = os.path.join(os.path.dirname(os.path.realpath(__file__)), r"bin\stock.bin")
ARCHIVED_BIN_PATH = os.path.join(os.path.dirname(os.path.realpath(__file__)), r"bin\archive.bin")
CONFIG_FILE_PATH = r"C:\temp\config.bin"
CONFIG_FILE_FOLDER = r"C:\temp"

@dataclass
class Config:
    __module__ = __name__
    xlsx_db_path: str
    sap_path:str

def check_file_paths(config):
    return os.path.exists(config.sap_path) and os.path.exists(config.xlsx_db_path)

def find_db_path() -> str:
    default_path = os.path.join(os.path.dirname(os.path.realpath(__file__)), "BlockedStockMQA.xlsx")
    if os.path.exists(default_path):
        return default_path
    return ""

def find_sap_path() -> str:
    default_path = r"C:\Program Files (x86)\SAP\FrontEnd\SAPgui\saplogon.exe"
    if os.path.exists(default_path):
        return default_path
    return ""

def load_config() -> Config:
    print("[SCRIPT CONFIG] Loading config")
    config = Config(xlsx_db_path="", sap_path="")
    if os.path.exists(CONFIG_FILE_PATH):
        print("[SCRIPT CONFIG] Loading Config File")
        config = pickle.load(open(CONFIG_FILE_PATH, "rb"))
    else:
        print("[SCRIPT CONFIG] Config File not found")
        if not os.path.exists(CONFIG_FILE_FOLDER):
            os.mkdir(CONFIG_FILE_FOLDER)

    
    import tkinter as tk
    from tkinter import filedialog

    root = tk.Tk()
    root.withdraw()
    if not config.xlsx_db_path:
        print("[SCRIPT CONFIG] Searching for xlsx file")
        path = find_db_path()
        if not path:
            print("[SCRIPT CONFIG] xlsx file not found. Please Select the xslx file...")
            path = filedialog.askopenfilename(defaultextension=["xlsx"],initialdir=os.path.dirname)
        config.xlsx_db_path = path
        print(f"[SCRIPT CONFIG] xlsx file found in '{path}'")

    if not config.sap_path:
        print("[SCRIPT CONFIG] Searching for SAPlogon")
        path = find_sap_path()
        if not path:
            print("[SCRIPT CONFIG] SAPlogon executable not found. Please Select the SAP executable...")
            path = filedialog.askopenfilename(defaultextension=["xlsx"],initialdir=os.path.dirname)
        config.sap_path = path
        print(f"[SCRIPT CONFIG] SAPlogon executable found in '{path}'")
    
    
    if not check_file_paths(config):
        if os.path.exists(CONFIG_FILE_PATH):
            os.remove(CONFIG_FILE_PATH)
        print("[SCRIPT CONFIG] Config failed, retry")
        return load_config()
    
    pickle.dump(config, open(CONFIG_FILE_PATH, "wb"))
    print("[SCRIPT CONFIG] Config loaded")
    
    return config