@echo off
chcp 65001 >nul
setlocal enabledelayedexpansion

set "file=main.c"
set "output=main.exe"

if not exist "%file%" (
    powershell -NoProfile -Command "[Console]::OutputEncoding = [System.Text.Encoding]::UTF8; Write-Host 'File %file% not found. ❌' -ForegroundColor Red"
    pause
    exit /b
)

powershell -NoProfile -Command "[Console]::OutputEncoding = [System.Text.Encoding]::UTF8; Write-Host 'Watching %file% for changes...' -ForegroundColor Yellow"

rem Get initial timestamp
for %%F in ("%file%") do set "lastmodified=%%~tF"

:loop
timeout /t 1 > nul
for %%F in ("%file%") do set "current=%%~tF"

if not "!current!"=="!lastmodified!" (
    set "lastmodified=!current!"
    cls
    powershell -NoProfile -Command "[Console]::OutputEncoding = [System.Text.Encoding]::UTF8; Write-Host '[Detected change] Compiling' -ForegroundColor Yellow"
    gcc "%file%" -o "%output%"
    if errorlevel 1 (
        powershell -NoProfile -Command "[Console]::OutputEncoding = [System.Text.Encoding]::UTF8; Write-Host 'Compilation failed ❌' -ForegroundColor Red"
    ) else (
        if exist "%output%" (
            powershell -NoProfile -Command "[Console]::OutputEncoding = [System.Text.Encoding]::UTF8; Write-Host 'Compilation succeeded ✅' -ForegroundColor Green"
            powershell -NoProfile -Command "[Console]::OutputEncoding = [System.Text.Encoding]::UTF8; Write-Host 'Running program...' -ForegroundColor Yellow"
            echo.
            "%output%"
            echo.
            echo.
        ) else (
            powershell -NoProfile -Command "[Console]::OutputEncoding = [System.Text.Encoding]::UTF8; Write-Host 'Error: %output% not found ❌' -ForegroundColor Red"
        )
        powershell -NoProfile -Command "[Console]::OutputEncoding = [System.Text.Encoding]::UTF8; Write-Host 'Waiting for next change... ⏳' -ForegroundColor Cyan"
    )
)
goto loop