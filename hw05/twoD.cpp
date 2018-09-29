#include <cstdio>
#include "umpteen3.h"
#include "twoD.h"
	
unsigned char* twoD(unsigned char* bytes, char* magic, int* width, 
									int* height, int max) {
	
	// create new file and open for writing binary into it
	FILE* fpr = fopen("byteTwo.ppm", "wb");
	
	//allocate array of pointers
	unsigned char** bitter = new unsigned char*[*height];
	
	//allocte flat array
	*bitter = new unsigned char[*width * *height];
	
	// set pointers to the start of each row
	for(unsigned char i = 1; i < *height; ++i) {
		bitter[i] = bitter[i-1] + *width;
	}
	
	unsigned char* bottom = *bitter;
	
	int numBytes = *width * *height * 3;
	
	for(unsigned char i = 0; i < numBytes; ++i) {
		bottom[i] += 1;
	}
	
	// writing the array into the new file
	fwrite(bitter, sizeof(char), numBytes, fpr);

	fclose(fpr);
	
	delete [] *bitter;
	delete [] bitter;
	bitter = NULL;
	
	return 0;
	
}