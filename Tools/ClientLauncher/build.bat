@echo off
rem Builds ProjectDS.exe (the launcher) into .\out with Visual Studio 2022 (x64). Run from anywhere.
setlocal
set "VCVARS=C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"
if not exist "%VCVARS%" set "VCVARS=C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Auxiliary\Build\vcvars64.bat"
if not exist "%VCVARS%" set "VCVARS=C:\Program Files\Microsoft Visual Studio\2022\Enterprise\VC\Auxiliary\Build\vcvars64.bat"
if not exist "%VCVARS%" set "VCVARS=C:\Program Files\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat"
if not exist "%VCVARS%" (echo Visual Studio 2022 with the C++ workload was not found.& exit /b 1)
call "%VCVARS%" >nul || exit /b 1

cd /d "%~dp0"
if not exist out mkdir out
rc /nologo /fo out\Launcher.res Launcher.rc || exit /b 1
cl /nologo /O2 /GS /EHsc /std:c++17 /DUNICODE /D_UNICODE /W4 /Fo:out\ /Fe:out\ProjectDS.exe Launcher.cpp out\Launcher.res ^
   /link /SUBSYSTEM:WINDOWS /MACHINE:X64 user32.lib kernel32.lib advapi32.lib shell32.lib shlwapi.lib version.lib || exit /b 1
echo Built %~dp0out\ProjectDS.exe