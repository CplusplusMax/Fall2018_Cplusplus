all: main

umpteen3.o: umpteen3.cpp umpteen3.h umpteen3Write.h
	g++ -c -Werror umpteen3.cpp

umpteen3Write.o: umpteen3Write.cpp umpteen3.h umpteen3Write.h
	g++ -c -Werror umpteen3Write.cpp

main.o: main.cpp umpteen3.h umpteen3Write.h
	g++ -c -Werror main.cpp

main: main.o umpteen3.o umpteen3Write.o
	g++ -o ughh main.o umpteen3.o umpteen3Write.o