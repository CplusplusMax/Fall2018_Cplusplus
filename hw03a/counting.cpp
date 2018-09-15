#include <cstdio>
#include "counting.h"

	
int counting() {
	
	// open file and write updated value of bam into the file called "numbah"
	FILE* fp = fopen("numbah.txt", "r");
	
	// declare variable
	int val;
		
	while(fscanf(fp, "%d", &val) != EOF) {
		
		printf("%d\n", val);
	
	}
	
	//increment variable
	val++;
	
	//close file
	fclose(fp);
	
	//open file to write new value
	FILE* fw = fopen("numbah.txt", "w");
	
		//print new value to file
		fprintf(fw, "%d", val);
	
	//close file	
	fclose(fw);
	
	// return value that is input into main's printf telling user # of times run
	return val-1;
}