#include <cstdio>
#include "umpteen3.h"
#include "umpteen3Write.h"
unsigned char* umpteen3(int* width, int* height, int* max, char* magic) {
	//open the file
	FILE* fp = fopen("bitetest.ppm", "rb");
	// Declare variables and initialize array for magic number to 3 "P +N +\0"

	// read Magic Number which is a string
	fscanf(fp, "%s", magic);
	printf("%s\n", magic);
	
	// read width and height which are integers
	fscanf(fp, "%d %d\n", width, height);
	printf("%d %d\n", *width, *height);	
	
	// calculate numBytes
	int numBytes = *width * *height * 3;
	
	// read Max bytes which is set to the integer value of 255
	fscanf(fp, "%d", max);
	printf("%d\n", *max);
	
	// print numBytes to see what the length of the array will be set to
	printf("The length of the binary array is: %d.\n", numBytes);
	
	// read binary data
	// create an array of unsigned char type that will store on the heap using "new"
	unsigned char* bytes = new unsigned char[numBytes];

	//return the pixel data in a one dimensional array called "bytes" of unsigned chars
	fread(bytes, sizeof(char), numBytes, fp);
	
	//printf("%s", bytes[1,5]);

	// close file		
	fclose(fp);
	
	//return &magic, width, height, &max, bytes, numBytes;
	return bytes;
	// remove allocated memory to array so do not get "std::bad_alloc" error
	//delete [] bytes;
	//bytes = NULL;
}