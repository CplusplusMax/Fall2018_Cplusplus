#include <cstdio>
#include "umpteen3.h"
#include "umpteen3Write.h"

int main(int argv, char** argc) {

	unsigned char* bytes;

	int width, height;
	
	umpteen3(&width, &height);
	
	int max;
	int numBytes;
	char magic[3];
	
	umpteen3Write(bytes, magic, &width, &height, &max, &numBytes);


}