#include <cstdio>
#include "umpteen3.h"
#include "umpteen3Write.h"
	
unsigned char* umpteen3Write(unsigned char* bytes, char* magic, int* width, 
									int* height, int max) {
	
	// create new file and open for writing binary into it
	FILE* fpr = fopen("byteCpy.ppm", "wb");
	
	int numBytes = *width * *height * 3;
	
	// print width, height, and max pixel value into file

	fprintf(fpr,"%s\n", magic);
	fprintf(fpr, "%d %d\n", *width, *height);
	fprintf(fpr, "%d\n", max);
	
	// printing to screen to ensure have the right information going into the file
	printf("\n%s\n", magic);
	printf("%d %d\n", *width, *height);
	printf("%d\n", max);
	printf("%d\n", numBytes);
	
	// writing the array into the new file
	fwrite(&bytes, sizeof(unsigned char), numBytes, fpr);

	fclose(fpr);
	
	return 0;
	
}