#include <cstdio>
#include "umpteen2.h"

int main(int argv, char** argc) {

	unsigned char* bytes;
	int max;
	int width, height;
	char magic[3];

	//umpteen2(bytes, numBytes);
	bytes = umpteen2(&width, &height, &max, magic);


}