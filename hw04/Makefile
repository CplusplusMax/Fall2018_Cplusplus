all: main

bites.o: bites.cpp bites.h
	g++ -c -Werror bites.cpp
	
main.o: main.cpp bites.h
	g++ -c -Werror main.cpp
	
main: main.o bites.o
	g++ -o main main.o bites.o