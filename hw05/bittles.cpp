#include <cstdio>

int main(int argv, char** argc) {

	int n = 123456;
	unsigned char* bittles = (unsigned char*)(&n);
	
	printf("%x %x %x %x\n", (int) bittles[0],(int) bittles[1],
							(int) bittles[2],(int) bittles[3]);

	
	if(bittles[0] > bittles[3]) {
		printf("You have a little-endian machine.");
	} else 
		printf("You have a big-endian manchine.");
}