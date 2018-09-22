#include <cstdio>
#include "tropical.h"

int main(int argv, char** argc) {

	//open the 
	
	int width = 650;
	int height = 652;
	int length;
	int size = width * height * 3;
	
	const char* string;
	const char* strung[size];
	
	
	
	checkLength(string, size);
	
	FILE* fp = fopen("copyTest.ppm", "wb+");
	
		fprintf(fp, strung);
	
	fclose(fp);
}