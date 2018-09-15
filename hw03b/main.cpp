#include <cstdio>
#include "swaahp.h"

int main(int argc, char** argv) {

	int one, two;
	
	printf("Think about two positive integers between 1 and 100.\n");
	printf("Enter the two integers separated by a space: ");
	scanf("%d %d", &one, &two);
	
	printf("The two integers you entered were: %d, %d.\n", one, two);

	swaahp(&one, &two);
	
	printf("The two numbers in numerical order are: %d, %d\n", two, one);
	
	return 0;


}