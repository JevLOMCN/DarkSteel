@echo off
title DarkSteel Mir 5 - Startup
echo ========================================
echo   DarkSteel Mir 5 - Startup
echo ========================================
echo.

echo [1/2] Building solution...
dotnet build Server.sln -c Debug
if %errorlevel% neq 0 (
    echo.
    echo [!] Build failed. Check the logs above.
    pause
    exit /b %errorlevel%
)
echo.

echo [2/2] Starting services...
start "Maestro" cmd /k "cd M5.Maestro && dotnet run --no-build"
start "Gateway" cmd /k "cd M5.Gateway && dotnet run --no-build"
start "Game Server" cmd /k "cd M5.Server && dotnet run --no-build"
echo.
echo ========================================
echo   All services started!
echo ========================================
pause