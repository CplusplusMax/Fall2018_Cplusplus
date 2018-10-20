#include <cstdio>
#include "Angle.h"

int main(int argc, char** argv ) {

	printf("Hello World!\n");
	
	Angle ang1(30.0);
	Angle ang2(60.0);
	Angle ang3(320.00);
	
	Angle plus = ang1 + ang2;
	Angle plus2 = ang2 + ang3;
	
	printf("The the two sets of angles are: %lf %lf\n", plus, plus2);
	
}