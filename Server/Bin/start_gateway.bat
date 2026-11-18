@echo off
rem Start M5.Gateway from this folder. Build first with build.bat if M5.Gateway\M5.Gateway.exe is missing.
title Gateway (Front)
setlocal
set "ASPNETCORE_ENVIRONMENT=Development"
cd /d "%~dp0M5.Gateway"
if not exist "M5.Gateway.exe" (
    echo [ERROR] %~dp0M5.Gateway\M5.Gateway.exe not found. Run build.bat first.
    pause
    exit /b 1
)
M5.Gateway.exe
echo.
echo M5.Gateway exited with code %errorlevel%.
pause