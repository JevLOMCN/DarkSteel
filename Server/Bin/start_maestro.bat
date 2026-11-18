@echo off
rem Start M5.Maestro from this folder. Build first with build.bat if M5.Maestro\M5.Maestro.exe is missing.
title Maestro
setlocal
set "ASPNETCORE_ENVIRONMENT=Development"
cd /d "%~dp0M5.Maestro"
if not exist "M5.Maestro.exe" (
    echo [ERROR] %~dp0M5.Maestro\M5.Maestro.exe not found. Run build.bat first.
    pause
    exit /b 1
)
M5.Maestro.exe
echo.
echo M5.Maestro exited with code %errorlevel%.
pause