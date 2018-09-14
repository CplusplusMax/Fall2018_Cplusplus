all: main

swapin.o: swapin.cpp swapin.h
	g++ -c -Werror swapin.cpp
	
main.o: main.cpp swapin.h
	g++ -c -Werror main.cpp
	
main: main.o swapin.o
	g++ -o tryit main.o swapin.o
	