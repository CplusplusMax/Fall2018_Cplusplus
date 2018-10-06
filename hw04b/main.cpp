#include <cstdio>
#include "umpteen3.h"
#include "umpteen3Write.h"

int main(int argv, char** argc) {

	unsigned char* bytes;

	int width, height;
	int max;
	char magic[3];
	
	bytes = umpteen3(&width, &height, &max, magic);
	

	umpteen3Write(bytes, magic, &width, &height, &max);


}