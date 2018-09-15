all: main

swaahp.o: swaahp.cpp swaahp.h
	g++ -c -Werror swaahp.cpp
	

main.o: main.cpp swaahp.h
	g++ -c -Werror main.cpp

main: main.o swaahp.o
	g++ -o swaahp main.o swaahp.o