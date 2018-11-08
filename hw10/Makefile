all: main

Angle.o: Angle.cpp Angle.h Log.h Fish.h Population.h FlippyFish.h DrunkenFish.h List.h
	g++ -c -Werror Angle.cpp
	
Log.o: Log.cpp Angle.h Log.h Fish.h Population.h FlippyFish.h DrunkenFish.h List.h
	g++ -c -Werror Log.cpp
	
Fish.o: Fish.cpp Angle.h Log.h Fish.h Population.h FlippyFish.h DrunkenFish.h List.h
	g++ -c -Werror Fish.cpp
	
FlippyFish.o: FlippyFish.cpp Angle.h Log.h Fish.h Population.h FlippyFish.h DrunkenFish.h List.h
	g++ -c -Werror FlippyFish.cpp
	
DrunkenFish.o: DrunkenFish.cpp Angle.h Log.h Fish.h Population.h FlippyFish.h DrunkenFish.h List.h
	g++ -c -Werror DrunkenFish.cpp
	
Population.o: Population.cpp Angle.h Log.h Fish.h Population.h FlippyFish.h DrunkenFish.h List.h
	g++ -c -Werror Population.cpp

main.o: main.cpp Angle.h Log.h Fish.h Population.h FlippyFish.h DrunkenFish.h List.h
	g++ -c -Werror main.cpp
	
main: main.o Angle.o Log.o Fish.o Population.o FlippyFish.o DrunkenFish.o
	g++ -o main main.o Angle.o Log.o Fish.o Population.o FlippyFish.o DrunkenFish.o