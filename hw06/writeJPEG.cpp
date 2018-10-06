#include <cstdio>
#include <jpeglib.h>
#include <string.h>
#include <stdint.h>
// using pacman -Ss opencv, searched for, found, and loaded mingw-w64-x86_64-opencv 
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <assert.h>
#include "jpec.h"
#include "readPPM.h"
#include "writeJPEG.h"
#include "loadImage.h"
	
unsigned char* writeJPEG(unsigned char* bdata, char* magic, int* width, 
									int* height, int* max) {
	

	
	// calculate size of binary array and assign to variable "sz"
	int sz = *width * *height * 3;
	
	// int wh = *width * *height;
	
	// implementation
	pname = argv[0];
	
	if (argc == 2) {

		int w, h;
		unsigned uint8_t* img = loadImage(argv[1], &w, &h);
		
		// Create a JPEG encoder provided image data
		jpec_enc_t* e = jpec_enc_new(img, w, h);
				
		// Compress
		int len;
		unsigned uint8_t* jpeg = jpec_enc_run(e, &len);
	
		// create new file and open for writing binary into it
		FILE* fpr = fopen("pTwoJ.jpeg", "wb");
		
		// write the data to the file
		fwrite(jpeg, sizeof(uint8_t), len, fpr);
		
		// close the file
		fclose(fpr);
		
		// notify user that the action is complete
		printf("done: pTwoJ.jpg (%d bytes)\n", len);
		
		jpec_enc_del(e);
		free(img);
	}
	else {
		fprintf(stderr, "Usage: \n");
		fprintf(stderr, " %s /path/to/bdata\n", pname);
		exit(1);
	}
	
	return 0;
}
	
	
	
	
	
	// Create a JPEG encoder provided image data
	//jpec_enc_t* e = jpec_enc_new(bdata, *width, *height);
	
	// Compress
	//int len;
	//const uint8_t* jpeg = jpec_enc_run(e, &len);
	
	// write JPEG into a file
	//fwrite(jpeg, sizeof(char), sz, fpr);
	
	//fclose(fpr);
	
	
	//return 0;
	
}

	// print width, height, and max pixel value into file
	// fprintf(fpr, "%s\n", magic);
	// fprintf(fpr, "%d %d\n", *width, *height);
	// fprintf(fpr, "%d\n", *max);