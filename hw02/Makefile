all: main

powerup.o: powerup.cpp powerup.h
	g++ -c -Werror powerup.cpp

main.o: main.cpp powerup.h
	g++ -c -Werror main.cpp

main: main.o powerup.o
	g++ -o main main.o powerup.o