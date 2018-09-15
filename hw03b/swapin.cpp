#include <cstdio>
#include <stdio.h>
#include "swapin.h"

int var1;
int var2;
	
	int swapin(int var1, int var2) {
	
	if(var1 > var2) {
		
		// point var1 to the address of var2 and var2 to the address of var1
		
		int min = var2;
		int max = var1;
		
		var1 = min;
		var2 = max;
		
	}
	
	return var1, var2;
	
}