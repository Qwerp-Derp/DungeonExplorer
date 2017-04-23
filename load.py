#Python script to load mods and check gcc's instalation
#type python load.py to load your mods

import subprocess
import os

checkGCC = subprocess.check_output("gcc --version", shell=True)
errorText = "'gcc' is not recognized as an internal or external command,operable program or batch file."

if checkGCC == errorText:
    print("Dungeon Explorer Erorr: MinGW does not EXIST please download and install from https://sourceforge.net/projects/mingw/"
    #install gcc and load mods
else:
    print("GCC exists")
     #load mods
    os.chdir("src/game/game.cpp")
    subprocess.call("g++ -std=c++11 game.cpp -o game.exe", shell=True)
    print("Mods have been installed")