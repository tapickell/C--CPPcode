@echo off
@REM checks for existance of compiled executable file
@REM so if already compiled it will just run the program
IF EXIST .\runMe.exe (
  echo Executable already exists.
  echo Skipping compile.
  echo Running program.
  .\runMe.exe
 ) ELSE (
 @REM if g++ is installed then this will compile the program using g++
 @REM then it will run the program
  IF EXIST %HOMEDRIVE%\MinGW\bin\g++.exe  (
   echo Compiling C++ source to executable.
   g++ main.cpp Game.cpp -o runMe.exe
   echo Program compiled.
   echo Running program.
   .\runMe.exe
  ) ELSE (
  @REM if g++ is not already installed this will run minGW installer
  @REM also opens MinGW instructions and System properties menu
    echo Please try again after installing g++ compiler.
	.\mingw-get-inst.exe
    START http://www.mingw.org/wiki/Getting_Started
	echo Don't forget to add C:\MinGW\bin to your eviroment variables.
	control sysdm.cpl
  )
)