all: main

umpteen.o: umpteen.cpp umpteen.h
	g++ -c -Werror umpteen.cpp
	
main.o: main.cpp umpteen.h
	g++ -c -Werror main.cpp
	
main: main.o umpteen.o
	g++ -o ahhh main.o umpteen.o