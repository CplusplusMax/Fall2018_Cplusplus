all: main

readPPM.o: readPPM.cpp readPPM.h writeJPEG.h loadImage.h
	g++ -c -Werror readPPM.cpp

loadImage.o: loadImage.cpp readPPM.h writeJPEG.h loadImage.h
	g++ -c -Werror loadImage.cpp

writeJPEG.o: writeJPEG.cpp readPPM.h writeJPEG.h loadImage.h
	g++ -c -Werror writeJPEG.cpp
	
main.o: main.cpp readPPM.h writeJPEG.h loadImage.h
	g++ -c -Werror main.cpp
	
main: main.o readPPM.o loadImage.o writeJPEG.o
	g++ -o msg main.o readPPM.o loadImage.o writeJPEG.o