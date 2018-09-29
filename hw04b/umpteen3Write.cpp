#include <cstdio>
#include "umpteen3.h"
#include "umpteen3Write.h"
	
void umpteen3Write(const unsigned char* bytes, char* magic, int* width, 
									int* height, int* max, int* numBytes) {
	
	// create new file and open for writing binary into it
	FILE* fpr = fopen("biteCopy.ppm", "wb");
	
	// print width, height, and max pixel value into file
	fprintf(fpr, "%s", magic);
	fprintf(fpr, "%d %d\n", *width, *height);
	fprintf(fpr, "%d\n", max);
	
	// writing the array into the new file
	fwrite(bytes, sizeof(char), *numBytes, fpr);

	fclose(fpr);
	
	//return 0;
	
}