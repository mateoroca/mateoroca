g++ -Wall -std=c++11 -c .\src\*.cpp
g++ -Wall -std=c++11 -c .\main.cpp
g++ *.o -o programa.exe

DEL *.o