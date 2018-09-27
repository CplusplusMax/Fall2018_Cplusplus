all: main

umpteen.o: umpteen.cpp umpteen.h
	g++ -c -Werror umpteen.cpp

umpteenWrite.o: umpteenWrite.cpp umpteen.h
	g++ -c -Werror umpteenWrite.cpp
	
main.o: main.cpp umpteen.h
	g++ -c -Werror main.cpp

main: main.o umpteen.o umpteenWrite.o
	g++ -o ughh main.o umpteen.o umpteenWrite.o