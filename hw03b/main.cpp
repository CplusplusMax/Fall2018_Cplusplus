#include <cstdio>
#include "swaahp.h"

int main(int argc, char** argv) {

	int one, two;
	
	printf("Think about two positive integers between 1 and 100.\n");
	printf("Enter the first integer: ");
	scanf("%d\n", &one);
	
	printf("Enter the second integer: ");
	scanf("%d\n", &two);
	
	printf("The two integers you entered were: %d, %d.\n", one, two);

	swaahp(&one, &two);
	
	printf("The two numbers in numerical order are: %d, %d/n", one, two);
	
	return 0;


}