import subprocess
import pyautogui
import time
import os

from blocked_stock import BlockedStock, get_current_stock

SERVER_NAME = "WCP - P1 Western Europe Production Link"
EXPORT_FILE_PATH = r"C:\temp\EXPORT.xlsx" 

def fetch_and_wait_for_data(sap_path, export_file_path):
    if os.path.exists(export_file_path):
        os.remove(export_file_path)
    fetch_data(sap_path)
    wait_for_data(export_file_path)

def fetch_data_wait(sap_path, ncs, stock_exit):
    if not os.path.exists(EXPORT_FILE_PATH):
        print("[DATA FETCHER] Aucun fichier de donnees trouve...")
        if 'y' in input("\tRecuperer les donnees de SAP automatiquement ? [Y/n] > ").lower():
            fetch_and_wait_for_data(sap_path, EXPORT_FILE_PATH)
        else:
            input("\tPressez sur ENTER apres avoir recupere les nouvelles donnees")
    else:
        print(f"[DATA FETCHER] Fichier de donnees trouve. Date de creation: {time.ctime(os.path.getctime(EXPORT_FILE_PATH))}")
        if 'y' in input("\tAimeriez-vous recuperer de nouvelles donnees  ? [Y/n] > ").lower():
            if 'y' in input("\tRecuperer les donnees de SAP automatiquement ? [Y/n] > ").lower(): 
                fetch_and_wait_for_data(sap_path, EXPORT_FILE_PATH)
            else:
                input("\tPressez sur ENTER apres avoir recupere les nouvelles donnees")
    print("[DATA FETCHER] Analyse des donnees...")
    return get_current_stock(EXPORT_FILE_PATH, ncs, stock_exit)

def fetch_data(sap_path):
    cmd_str = sap_path
    print("[DATA FETCHER] Demarrage de SAP")
    subprocess.Popen(cmd_str, shell=True)
    time.sleep(5)
    pyautogui.press('enter')
    #input(f"[DATA FETCHER] Please Connect to '{SERVER_NAME}' and press ENTER")
    time.sleep(2)
    print("[DATA FETCHER] Recuperation des donnees")
    cmd_str = "ScriptBlockedStock.vbs"
    subprocess.Popen(cmd_str, shell=True)

def wait_for_data(file_path):
    while not os.path.exists(file_path):
        time.sleep(2)
