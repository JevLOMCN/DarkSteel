@echo off
rem Start Maestro, the Game Server and the Gateway, each in its own window (or Windows Terminal tab when wt is available).
rem Order: game server first so the Gateway finds it straight away. Stop everything with stop_all.bat.
setlocal
set "BIN=%~dp0"

if not exist "%BIN%M5.Server\M5.Server.exe" (
    echo [ERROR] Services are not built. Run build.bat first.
    pause
    exit /b 1
)

where wt >nul 2>&1
if %errorlevel%==0 (
    wt --title "Maestro" -d "%BIN%." cmd /k "%BIN%start_maestro.bat" ; new-tab --title "Game Server" -d "%BIN%." cmd /k "%BIN%start_server.bat" ; new-tab --title "Gateway" -d "%BIN%." cmd /k "%BIN%start_gateway.bat"
) else (
    start "Maestro" cmd /k "%BIN%start_maestro.bat"
    start "Game Server" cmd /k "%BIN%start_server.bat"
    start "Gateway" cmd /k "%BIN%start_gateway.bat"
)