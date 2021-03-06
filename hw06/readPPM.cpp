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

unsigned char* readPPM(int* width, int* height, int* max, char* magic) {
	//open the file
	FILE* fp = fopen("test.ppm", "rb");

	// read Magic Number which is a string
	fscanf(fp, "%s", magic);
	printf("%s\n", magic);
	
	// read width and height which are integers
	fscanf(fp, "%d %d\n", width, height);
	printf("%d %d\n", *width, *height);	
	
	// calculate numBytes
	int numBytes = *width * *height * 3;
	
	// read Max bytes which is set to the integer value of 255
	fscanf(fp, "%d\n", max);
	printf("%d\n", *max);
	
	// print numBytes to see what the length of the array will be set to
	printf("The length of the binary array is: %d.\n", numBytes);
	
	// read binary data
	// create an array of unsigned char type that will store on the heap using "new"
	unsigned char* bdata = new unsigned char[numBytes];

	//return the pixel data in a one dimensional array called "bdata" of unsigned chars
	fread(bdata, sizeof(char), numBytes, fp);

	// close file		
	fclose(fp);
	//return one dimensional array of binary bytes;
	return bdata;
}