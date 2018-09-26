#include <cstdio>
#include "umpteen.h"


int main(int argv, char** argc) {
	//open the file
	
	FILE* fp = fopen("bitetest.ppm", "rb");
	
	// Declare variables and initialize array for magic number to 3 "P +N +\0"
	char magic[3];
	int width, height, max;
	int numBytes = width*height*3;
	
	// read Magic Number which is a string
	fscanf(fp, "%s", magic);
	printf("%s\n", magic);
	
	// read width and height which are integers
	fscanf(fp, "%d %d\n", &width, &height);
	printf("%d %d\n", width, height);
		
	// read Max bytes which is set to the integer value of 255
	fscanf(fp, "%d", &max);
	printf("%d", max);
	
	// read binary data
	// create an array of unsigned char type that will store on the heap using "new"
	unsigned char* bytes = new unsigned char[numBytes];
	
	//return the pixel data in a one dimensional array called "bytes" of unsigned chars
	fread(bytes, sizeof(bytes), numBytes, fp);
	
	fclose(fp);
	
}
	