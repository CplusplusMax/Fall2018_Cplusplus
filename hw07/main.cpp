#include <cstdio>
#include <iostream>
#include "Angle.h"

int main(int argc, char** argv ) {

	std::cout << "Hello Professor!" <<std::endl<<std::endl;
	
	Angle* ang1 = new Angle();
	Angle* ang2 = new Angle();
	Angle* ang3 = new Angle();
	Angle* ang4 = new Angle();
	
	ang1->set(5.0);
	ang2->set(60.0);
	ang3->set(80.0);
	ang4->set(320.0);
	
	// initializing a non-pointer type angle
	Angle plus(90.0);
	
	
	
	std::cout << "The first angle is: " << ang1->getAngle() << " degrees." << std::endl;
	
	std::cout << "The second angle is: " << ang2->getAngle() << " degrees." << std::endl;
	
	std::cout << "The third angle is: " << ang3->getAngle() << " degrees." << std::endl;

	std::cout << "The fourth angle is: " << ang4->getAngle() << " degrees." << std::endl << std::endl;
	
	std::cout << "Angle 2 plus Angle 3 is: " << ang2->getAngle() + ang3->getAngle() << " degrees." << std::endl;

	std::cout << "Angle 3 minus Angle 2 is: " << ang3->getAngle() - ang2->getAngle() << " degrees." << std::endl;
	
	std::cout << "Angle 4 divided by Angle 3 is: " << ang4->getAngle() / ang3->getAngle() << " degrees." << std::endl<<std::endl;
	

	std::cout << "Angle 2 plus Angle 4 is: " << ang2->getAngle() + ang4->getAngle() -360 << " degrees." << std::endl<<std::endl;

	std::cout << "Angle 1 times Angle 3 is: " << ang1->getAngle() * ang3->getAngle() -360 << " degrees." << std::endl<<std::endl;
		
	std::cout << "The new non-pointer angle on the stack is: " << plus.getAngle() <<std::endl;  // using a non-pointer type angle

}