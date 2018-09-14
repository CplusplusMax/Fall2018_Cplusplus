#include <cstdio>
#include <stdio.h>
#include "swapin.h"

	int var1 = 43;
	int var2 = 22;
	int min;
	int max;
	
void swapin(int* var1, int* var2) {

	if(var1 < var2){
		int* var1 = &var1;
		int* var2 = &var2;
	}else {
		int* var1 = &var2;
		int* var2 = &var1;
	}
	
	printf(var1, var2);

	return 0;
}