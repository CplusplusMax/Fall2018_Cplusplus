#include <cstdio>
#include "counting.h"

	int bam;
	int now;
	
int counting() {
	// declares the incremental variable "bam"
	int bam = 1;
	
	FILE* fp = fopen("numbah.txt", "w");
		
		now = now + bam;
	
		fprintf(fp, "%d", now + 1);
	
	fclose(fp);

	
	FILE* fr = fopen("numbah.txt", "r");
	
	while(fscanf(fr, "%d", &now) != EOF) {
		printf("%d\n", now);
	}
	
	fclose(fr);

	return now;
}