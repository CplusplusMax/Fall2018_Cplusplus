#include <cstdio>
#include "toy.h"

int checkLength(const char* string, int size) {

	//open the file
	
	FILE* fp = fopen("bitetest.ppm", "r+");
	
	int length = 0;
	
	for( ; length < size && string[length] != '\0'; ++length);
	
	return length;
	
	fclose(fp);
}