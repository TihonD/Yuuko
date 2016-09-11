@echo off
SET THEFILE=C:\Users\TihonD\Desktop\Sakura\Yuuko\ntf\NTF.exe
echo Linking %THEFILE%
ld.exe  -s --subsystem windows   -o C:\Users\TihonD\Desktop\Sakura\Yuuko\ntf\NTF.exe C:\Users\TihonD\Desktop\Sakura\Yuuko\ntf\link.res
if errorlevel 1 goto linkend
goto end
:asmend
echo An error occured while assembling %THEFILE%
goto end
:linkend
echo An error occured while linking %THEFILE%
:end
