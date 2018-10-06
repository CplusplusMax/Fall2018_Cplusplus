#include <cstdio>
#include <jpeglib.h>
#include <string.h>
#include <stdint.h>
// using pacman -Ss opencv, searched for, found, and loaded mingw-w64-x86_64-opencv 
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <assert.h>
#include "readPPM.h"
#include "writeJPEG.h"
#include "loadImage.h"
	
unsigned uint8_t* loadImage(unsigned char* bdata, int* width, int* height) {

	assert(bdata);
	unsigned IplImage* img = cvLoadImage(bdata, 1);
	if(!img) return NULL;
	if(img->nChannels != 1) {
		IplImage* tmp = cvCreateImage(cvSize(img->width, img->height), IPL_DEPTH_8U, 1);
		cvCvtColor(img, tmp, CV_BGR2GRAY);
		cvReleaseImage(&img);
		img = tmp;
	}
	int w = img->width;
	int h = img->height;
	int bpr = img->widthStep;
	unsigned uint8_t* data = (unsigned uint8_t*)malloc(w*h*sizeof(uint8_t));
	if(w == bpr) memcpy(data, img->imageData, w*h*sizeof(uint8_t));
	else {
		for (int i = 0; i < h; ++i) {
			memcpy(data + i*w*sizeof(uint8_t), img->imageData + i*bpr*sizeof(uint8_t),
				w*sizeof(uint8_t));
		}
	}
	
	cvReleaseImage(&img);
	*width = w;
	*height = h;
	return data;
}


}