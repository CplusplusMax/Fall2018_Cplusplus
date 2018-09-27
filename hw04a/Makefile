all: main

umpteen2.o: umpteen2.cpp umpteen2.h
	g++ -c -Werror umpteen2.cpp

main.o: main.cpp umpteen2.h
	g++ -c -Werror main.cpp

main: main.o umpteen2.o
	g++ -o ughh main.o umpteen2.o