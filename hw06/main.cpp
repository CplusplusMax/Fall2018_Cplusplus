#include <cstdio>
#include <jpeglib.h>
#include <jpec.h>
#include "readPPM.h"
#include "writeJPEG.h"
#include "loadImage.h"



int main(int argv, char** argc) {

	printf("Hello World\n");
	
	const char* bdata;
	const char* pname;

	int width, height;
	int max;
	char magic[3];
	
	bdata = readPPM(&width, &height, &max, magic);
	
	// load data
	uint8_t* load_image(bdata, &width, &height);	
	
	// write jpeg to file
	writeJPEG(bdata, magic, &width, &height, &max);
	

	
	
}