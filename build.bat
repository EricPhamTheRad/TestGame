set files=src\glad.c src\main.c
set libs=D:\VSCODE\C_Projects\TestGame\lib\SDL2.lib D:\VSCODE\C_Projects\TestGame\lib\SDL2main.lib D:\VSCODE\C_Projects\TestGame\lib\freetype.lib
CL /Zi /I D:\VSCODE\C_Projects\TestGame\include %files% /link %libs% /OUT:mygame.exe