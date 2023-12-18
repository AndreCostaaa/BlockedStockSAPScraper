# Blocked Stock MQA - SAP Scraper

This is a python app that handles the blocked stock for PMI.

# Build

Using python3. Create a virtual environnement, activate it and install requirements:

```powershell
python -m venv env
& .\env\Scripts\Activate.ps1
pip install -r requirements.txt
```

To create an .exe file, [Nuitka](https://github.com/Nuitka/Nuitka) can be used to build this project.

Once you have all the [Nuitka](https://github.com/Nuitka/Nuitka) requirements.

Activate the virtual environnement and build it

```powershell
& ./env/scripts/activate.ps1
python -m nuitka --standalone ./src/main.py --enable-plugin=tk-inter
```
