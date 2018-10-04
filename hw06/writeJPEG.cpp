#include <cstdio>
#include <jpeglib.h>
#include "readPPM.h"
#include "writeJPEG.h"
	
unsigned char* writeJPEG(unsigned char* bdata, char* magic, int* width, 
									int* height, int* max) {
	
	// create new file and open for writing binary into it
	FILE* fpr = fopen("ppm2jpg.ppm", "wb");
	
	// calculate size of binary array and assign to variable "sz"
	int sz = *width * *height * 3;
	
	// print width, height, and max pixel value into file
	fprintf(fpr,"%s\n", magic);
	fprintf(fpr, "%d %d\n", *width, *height);
	fprintf(fpr, "%d\n", max);
	

	
	fwrite(bdata, sizeof(char), sz, fpr);	
	
	
	fclose(fpr);
	
	
	return 0;
	
}