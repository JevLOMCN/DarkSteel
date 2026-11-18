@echo off
rem Start M5.Server from this folder. Build first with build.bat if M5.Server\M5.Server.exe is missing.
title Game Server
setlocal
set "ASPNETCORE_ENVIRONMENT=Development"
cd /d "%~dp0M5.Server"
if not exist "M5.Server.exe" (
    echo [ERROR] %~dp0M5.Server\M5.Server.exe not found. Run build.bat first.
    pause
    exit /b 1
)
M5.Server.exe
echo.
echo M5.Server exited with code %errorlevel%.
pause