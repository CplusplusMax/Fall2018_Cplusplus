#include <cstdio>
#include <iostream>
#include "Angle.h"

int main(int argc, char** argv ) {

	std::cout << "Hello World!" <<std::endl;
	
	Angle* ang1 = new Angle();
	Angle* ang2 = new Angle();
	Angle* ang3 = new Angle();
	
	ang1->set(60.0);
	ang2->set(80.0);
	ang3->set(320.0);
	
	//Angle angle;
	Angle plus(90.0);
	
	//plus = angle + (ang2);
	
	
	std::cout << "The first angle is: " << ang1->getAngle() << " degrees." << std::endl;
	
	std::cout << "The second angle is: " << ang2->getAngle() << " degrees." << std::endl;

	std::cout << "The third angle is: " << ang3->getAngle() << " degrees." << std::endl;
	
	//plus += ang3->getAngle();
	
	std::cout << "The new angle is: " << plus <<std::endl;


}