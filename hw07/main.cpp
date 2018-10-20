#include <cstdio>
#include <iostream>
#include "Angle.h"

int main(int argc, char** argv ) {

	std::cout << "Hello World!" <<std::endl;
	
	Angle ang1(30.0);
	Angle ang2(60.0);
	Angle ang3(320.00);
	
	Angle plus = ang1 + ang2;
	Angle plus2 = ang2 + ang3;
	
	//std::cout << "The the two sets of angles are: " << plus plus2 <<std::endl;
	
}