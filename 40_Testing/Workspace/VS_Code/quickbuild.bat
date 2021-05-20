mkdir Debug
mkdir Debug\obj

:build commands
gcc -I ..\..\..\40_Testing\Code\cfg -I ..\..\..\10_Code\Platform -I ..\..\..\10_Code\StaticCode\inc -I ..\..\..\20_Configs -O0 -g3 -Wall -c ..\..\..\40_Testing\Code\src\application.c -o Debug\obj\application.o

gcc -I ..\..\..\40_Testing\Code\cfg -I ..\..\..\10_Code\Platform -I ..\..\..\10_Code\StaticCode\inc -I ..\..\..\20_Configs -O0 -g3 -Wall -c ..\..\..\10_Code\StaticCode\src\CntConfigurable.c -o Debug\obj\CntConfigurable.o

:link command
g++ -o Debug\application.exe Debug\obj\application.o Debug\obj\CntConfigurable.o  