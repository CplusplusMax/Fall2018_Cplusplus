#include <cstdio>
#include "umpteen.h"

	// Declare variables and initialize array for magic number to 3 "P +N +\0"
	int width, height, max;
	int numBytes;
	unsigned char* bytes;
	
int umpteenWrite(const unsigned char* string, int size) {
	
	// create new file and open for writing binary into it
	FILE* fpr = fopen("biteCopy.ppm", "wb");
	
	// print width, height, and max pixel value into file
	fprintf(fpr, "%d %d\n", width, height);
	fprintf(fpr, "%d\n", max);
	
	// writing the array into the new file
	fwrite(bytes, sizeof(char), numBytes, fpr);
	
	
	return 0;
	
	fclose(fpr);
	
}