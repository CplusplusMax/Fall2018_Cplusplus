#include <cstdio>
#include <jpeglib.h>
#include "readPPM.h"
#include "writeJPEG.h"

int main(int argv, char** argc) {

	printf("Hello World\n");
	
	unsigned char* bdata;

	int width, height;
	int max;
	char magic[3];
	
	bdata = readPPM(&width, &height, &max, magic);
	
	writeJPEG(bdata, magic, &width, &height, &max);

}