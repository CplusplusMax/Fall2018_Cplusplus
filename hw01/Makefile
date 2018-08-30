all: main

compound.o: compound.cpp compound.h
	g++ -c -Werror compound.cpp

main.o: main.cpp compound.h
	g++ -c -Werror main.cpp

main: main.o compound.o
	g++ -o main main.o compound.o