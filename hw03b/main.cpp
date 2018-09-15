#include <cstdio>
#include "swaahp.h"

int main(int argc, char** argv) {

	int num1, num2;
	
	printf("Think about two positive integers between 1 and 100.\n");
	printf("Enter the two integers separated by a space: ");
	scanf("%d %d", &num1, &num2);
	
	printf("The two integers you entered were: %d, %d.\n", num1, num2);
	
	//pointers for one and two to addresses of num1 and num2
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	
	swaahp(ptr1, ptr2);
	
	printf("The two numbers in numerical order are: %d, %d\n", num1, num2);
	
	return 0;


}