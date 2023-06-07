import subprocess
import pyautogui
import time
import os

SERVER_NAME = "WCP - P1 Western Europe Production Link"
EXPORT_FILE_PATH = r"C:\temp\EXPORT.xlsx" 
def fetch_data_wait(sap_path):
    
    if os.path.exists(EXPORT_FILE_PATH):
        os.remove(EXPORT_FILE_PATH)
    fetch_data(sap_path)

    wait_for_data(EXPORT_FILE_PATH)
    return EXPORT_FILE_PATH
    
def fetch_data(sap_path):
    cmd_str = sap_path
    print("[DATA FETCHER] Launching SAP")
    subprocess.Popen(cmd_str, shell=True)
    time.sleep(5)
    pyautogui.press('enter')
    #input(f"[DATA FETCHER] Please Connect to '{SERVER_NAME}' and press ENTER")
    time.sleep(2)
    print("[DATA FETCHER] Fetching Data")
    cmd_str = "ScriptBlockedStock.vbs"
    subprocess.Popen(cmd_str, shell=True)

def wait_for_data(file_path):
    while not os.path.exists(file_path):
        time.sleep(2)
