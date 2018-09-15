#include <cstdio>
#include <stdio.h>
#include "swapin.h"

int main(int argc, char** argv) {
	
	int var1;
	int var2;
	
	swapin(var1, var2);

	printf("The numbers in numerical order are %d, %d\n", var1, var2);
}
	