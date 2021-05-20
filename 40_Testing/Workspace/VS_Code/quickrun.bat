echo off

.\Debug\application.exe

:check the return value of the command
IF %ERRORLEVEL% == 0 ( 
	echo Success
) ELSE ( 
	echo Fail 
)