#include <cstdio>
#include "umpteen3.h"
#include "twoD.h"

int main(int argv, char** argc) {

	unsigned char* bytes;

	int width, height;
	int max;
	char magic[3];
	
	umpteen3(&width, &height, &max, magic);
	

	twoD(bytes, magic, &width, &height, max);

}