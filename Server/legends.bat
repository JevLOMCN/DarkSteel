@echo off
REM DarkSteel Mir 5 server helper.   legends dev   |   legends build   |   legends help

set "CMD=%~1"
if "%CMD%"=="" goto :usage
if /i "%CMD%"=="dev" goto :dev
if /i "%CMD%"=="build" goto :build
goto :usage

:usage
echo.
echo   dev     Build once, then start Maestro, the Gateway and the Game Server (dotnet watch run, Windows Terminal tabs)
echo   build   Build Server.sln (Debug)
echo.
goto :eof

:build
dotnet build "%~dp0Server.sln" -c Debug
goto :eof

:dev
title Start Server
REM Build once up front: parallel "dotnet watch" builds race on the shared projects
echo [Dev] Building solution...
dotnet build "%~dp0Server.sln" -c Debug
if errorlevel 1 (
    echo [Dev] Build failed. Fix the errors and try again.
    exit /b 1
)

echo [Dev] Starting servers (Maestro, Gateway, Game Server)...
wt --title "Maestro" -d "%~dp0M5.Maestro" cmd /k "timeout /t 1 /nobreak >nul && dotnet watch run" ; ^
   new-tab --title "Gateway" -d "%~dp0M5.Gateway" cmd /k "timeout /t 1 /nobreak >nul && dotnet watch run" ; ^
   new-tab --title "Game Server" -d "%~dp0M5.Server" cmd /k "timeout /t 1 /nobreak >nul && dotnet watch run"
goto :eof