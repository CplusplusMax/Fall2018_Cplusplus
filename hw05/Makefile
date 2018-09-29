all: main

umpteen3.o: umpteen3.cpp umpteen3.h twoD.h
	g++ -c -Werror umpteen3.cpp

twoD.o: twoD.cpp umpteen3.h twoD.h
	g++ -c -Werror twoD.cpp

main.o: main.cpp umpteen3.h twoD.h
	g++ -c -Werror main.cpp

main: main.o umpteen3.o twoD.o
	g++ -o ughh main.o umpteen3.o twoD.o