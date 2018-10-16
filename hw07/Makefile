all: main

Angle.o: Angle.cpp Angle.h
	g++ -c -Werror Angle.cpp
	
main.o: main.cpp Angle.h
	g++ -c -Werror main.cpp
	
main: main.o Angle.o
	g++ -o main main.o Angle.o