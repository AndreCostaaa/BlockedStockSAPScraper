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
    print("[SCRIPT CONFIG] A la recherche du fichier de configuration")
    config = Config(xlsx_db_path="", sap_path="")
    if os.path.exists(CONFIG_FILE_PATH):
        print("[SCRIPT CONFIG] Chargement du fichier de configuration")
        config = pickle.load(open(CONFIG_FILE_PATH, "rb"))
    else:
        print("[SCRIPT CONFIG] Fichier de configuration introuvable")
        if not os.path.exists(CONFIG_FILE_FOLDER):
            os.mkdir(CONFIG_FILE_FOLDER)

    
    import tkinter as tk
    from tkinter import filedialog
    root = tk.Tk()
    root.withdraw()
    if not config.xlsx_db_path:
        print("[SCRIPT CONFIG] A la recherche du fichier .xlsx")
        path = find_db_path()
        if not path:
            print("[SCRIPT CONFIG] .xlsx file n'a pas ete trouve. Selectionnez manuellement le fichier .xlsx...")
            path = filedialog.askopenfilename(defaultextension=["xlsx"],initialdir=os.path.dirname)
        config.xlsx_db_path = path
        print(f"[SCRIPT CONFIG] .xlsx file trouve sur '{path}'")

    if not config.sap_path:
        print("[SCRIPT CONFIG] A la recherche de SAPlogon")
        path = find_sap_path()
        if not path:
            print("[SCRIPT CONFIG] Executable SAPlogon n'a pas pu etre trouve. Selectionnez manuellement l'executable SAP ...")
            path = filedialog.askopenfilename(defaultextension=["xlsx"],initialdir=os.path.dirname)
        config.sap_path = path
        print(f"[SCRIPT CONFIG] SAPlogon executable trouve sur '{path}'")
    
    
    if not check_file_paths(config):
        if os.path.exists(CONFIG_FILE_PATH):
            os.remove(CONFIG_FILE_PATH)
        print("[SCRIPT CONFIG] Erreur de Configuration, reesayez svp...")
        return load_config()
    
    pickle.dump(config, open(CONFIG_FILE_PATH, "wb"))
    print("[SCRIPT CONFIG] Configuration chargee")
    
    return config