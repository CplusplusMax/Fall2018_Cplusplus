#include <cstdio>
#include "umpteen2.h"


	
	
unsigned char* umpteen(int* width, int* height) {
	//open the file
	
	FILE* fp = fopen("bitetest.ppm", "rb");
	// Declare variables and initialize array for magic number to 3 "P +N +\0"
	
	int max;

	char magic[3];
	
	// read Magic Number which is a string
	fscanf(fp, "%s", magic);
	printf("%s\n", magic);
	
	// read width and height which are integers
	fscanf(fp, "%d %d\n", width, height);
	printf("%d %d\n", *width, *height);
			
	int numBytes = *width * *height * 3;
	
	// read Max bytes which is set to the integer value of 255
	fscanf(fp, "%d", &max);
	printf("%d", max);
	
	// read binary data
	// create an array of unsigned char type that will store on the heap using "new"
	unsigned char* bytes = new unsigned char[numBytes];
	
	//return the pixel data in a one dimensional array called "bytes" of unsigned chars
	fread(bytes, sizeof(char), numBytes, fp);

	// close file		
	fclose(fp);

	return width, height, bytes;

	
	// remove allocated memory to array so do not get "std::bad_alloc" error
	delete [] bytes;
	bytes = NULL;
	
}