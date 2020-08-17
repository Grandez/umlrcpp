: Flex
@echo off

SET OLDCD=%CD%

CD D:\cpp\umlrcpp\generated
IF ERRORLEVEL  1 GOTO :ERROR
DEL /Q *.*
..\tools\bison -l -v -k --debug -o umlrParser.cpp ..\grammar\umlrParser.yy
IF ERRORLEVEL  1 GOTO :ERROR 
..\tools\flex -d -L -o .\umlrScanner.cpp ..\grammar\umlrScanner.ll
IF ERRORLEVEL  1 GOTO :ERROR 

CD %OLDCD%

:call :FileModTime test.txt A
:call :FileModTime pippo.txt B
:set "diff=0"
:if defined A if defined B set /a diff=B-A
:if %diff% gtr 2 echo xxxx
:exit /b


: :FileModTime  File  [TimeVar]
EXIT /B 0

:ERROR
CD %OLDCD%
EXIT /B 1