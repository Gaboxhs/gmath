@echo off

rem Building the project...
cmake --build build

rem Running main.exe...
build\bin\debug\main.exe

