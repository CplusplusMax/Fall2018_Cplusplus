#include <cstdio>
#include "tropical.h"

int checkLength(const char* string, int size) {

	//open the file
	
	FILE* fp = fopen("bitetest.ppm", "rb+");
	
	int length = 0;
	char* strung[];
	
	for( ; length < size && string[length] != '\0'; ++length);
		strung = string;
		
	return strung;
	
	fclose(fp);
}