#include <cstdio>
#include <jpeglib.h>
#include <string.h>
#include <stdint.h>
// using pacman -Ss opencv, searched for, found, and loaded mingw-w64-x86_64-opencv 
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <assert.h>
#include "readPPM.h"
#include "writeJPEG.h"
#include "loadImage.h"



int main(int argv, char** argc) {

	printf("Hello World\n");
	
	unsigned char* bdata;
	unsigned char* pname;
	unsigned uint8_t* data;

	int width, height;
	int max;
	char magic[3];
	
	bdata = readPPM(&width, &height, &max, magic);
	
	// load image data
	data = loadImage(bdata, &width, &height);	
	
	// write jpeg to file
	writeJPEG(bdata, magic, &width, &height, &max);
	

	
	
}