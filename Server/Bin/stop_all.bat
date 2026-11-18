@echo off
rem Stop all running Mir 5 server processes.
taskkill /F /IM M5.Gateway.exe >nul 2>&1 && echo Stopped M5.Gateway || echo M5.Gateway was not running
taskkill /F /IM M5.Server.exe >nul 2>&1 && echo Stopped M5.Server || echo M5.Server was not running
taskkill /F /IM M5.Maestro.exe >nul 2>&1 && echo Stopped M5.Maestro || echo M5.Maestro was not running