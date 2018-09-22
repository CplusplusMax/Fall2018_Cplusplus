all: tryAgain

toy.o: toy.cpp toy.h
	g++ -c -Werror toy.cpp

	
tryAgain.o: tryAgain.cpp toy.h
	g++ -c -Werror tryAgain.cpp
	
tryAgain: tryAgain.o toy.o
	g++ -o main tryAgain.o toy.o