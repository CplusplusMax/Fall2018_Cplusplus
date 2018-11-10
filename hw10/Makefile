all: main

Log.o: Log.cpp Angle.h Log.h Fish.h FlippyFish.h DrunkenFish.h
	g++ -c -Werror Log.cpp
	
Fish.o: Fish.cpp Angle.h Log.h Fish.h FlippyFish.h DrunkenFish.h
	g++ -c -Werror Fish.cpp
	
FlippyFish.o: FlippyFish.cpp Angle.h Log.h Fish.h FlippyFish.h DrunkenFish.h
	g++ -c -Werror FlippyFish.cpp
	
DrunkenFish.o: DrunkenFish.cpp Angle.h Log.h Fish.h FlippyFish.h DrunkenFish.h
	g++ -c -Werror DrunkenFish.cpp
	
main.o: main.cpp Angle.h Log.h Fish.h FlippyFish.h DrunkenFish.h
	g++ -c -Werror main.cpp
	
main: main.o Log.o Fish.o FlippyFish.o DrunkenFish.o
	g++ -o main main.o Log.o Fish.o FlippyFish.o DrunkenFish.o