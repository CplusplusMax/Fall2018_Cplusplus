all: main

counting.o: counting.cpp counting.h
	g++ -c -Werror counting.cpp

main.o: main.cpp counting.h
	g++ -c -Werror main.cpp

main: main.o counting.o
	g++ -o times main.o counting.o