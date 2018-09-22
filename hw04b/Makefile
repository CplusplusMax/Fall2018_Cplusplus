all: mainTrop

tropical.o: tropical.cpp tropical.h
	g++ -c -Werror tropical.cpp

mainTrop.o: mainTrop.cpp tropical.h
	g++ -c -Werror mainTrop.cpp
	
mainTrop: mainTrop.o tropical.o
	g++ -o many mainTrop.o tropical.o