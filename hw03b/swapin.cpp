#include <cstdio>
#include <stdio.h>
#include "swapin.h"

int var1;
int var2;
	
int swapin(var1, var2) {
		
	if(var1 > var2) {
		int* var1 = &var2
		int* var2 = &var1
	}
	
	return (var1, var2);
	
}