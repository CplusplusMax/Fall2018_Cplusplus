#include <cstdio>
#include <stdio.h>
#include "swapin.h"

void getnum();
int swapin(int x, int y);

int main(int argc, char** argv) {
//int main(){

	getnum();
	
	return 0;
}

void getnum()
{
	int var1, var2;
	
	printf("Think of two unique positive integers from 1 to 99.\n");
	printf("Please enter the first number here: ");
	scanf("%d", &var1);
	
	printf("Please enter the second number here: ");
	scanf("%d", &var2);
	
	printf("The two numbers you entered were: %d, %d\n", var1, var2);
	
	if(var1 > var2){
			
		swapin(var1, var2);
		printf("The numbers in numerical order are %d, %d\n", var1, var2);
	}else

	printf("The numbers in numerical order are %d, %d\n", var1, var2);
}
	