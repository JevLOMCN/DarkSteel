@echo off
rem Build the whole solution; output goes to the per-project folders in this directory.
setlocal
dotnet build "%~dp0..\Server.sln" -c Debug
if errorlevel 1 (
    echo.
    echo [ERROR] Build failed. Fix the errors above and try again.
    pause
    exit /b 1
)
echo.
echo [OK] Build finished. Start the servers with start_all.bat.