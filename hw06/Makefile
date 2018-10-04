all: main

readPPM.o: readPPM.cpp readPPM.h writeJPEG.h
	g++ -c -Werror readPPM.cpp

readJPEG.o: readJPEG.cpp readPPM.h writeJPEG.h
	g++ -c -Werror readJPEG.cpp
	
main.o: main.cpp readPPM.h writeJPEG.h
	g++ -c -Werror main.cpp
	
main: main.o readPPM.o writeJPEG.o
	g++ -o msg main.o readPPM.o writeJPEG.o