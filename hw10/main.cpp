#include <iostream>
#include <exception>
#include <cmath>
#include <cstdlib>
#include <string>
#include <array>
//#include "Angle.h"
#include "Log.h"
#include "Fish.h"
//#include "FlippyFish.h"
#include "DrunkenFish.h"

int main(int argc, char** argv ) {

	//const std::string& msg;
	
	std::cout << "Aloha Professor!...and to the fishes in the deep blue sea." <<std::endl<<std::endl;


	
	//FlippyFish* Fred = new FlippyFish();
	//DrunkenFish* Dave = new DrunkenFish();
		
	
	Log& logIt = Log::getInstance();
	std::cout << logIt.pr(msg) << std::endl;	
	
	
}
	
	// Old code	
	// Angle* ang1 = new Angle();
	// Angle* ang2 = new Angle();
	// Angle* ang3 = new Angle();
	// Angle* ang4 = new Angle();
	
	//ang1->set(5.0);
	//ang2->set(60.0);
	//ang3->set(80.0);
	//ang4->set(320.0);
	// initializing a non-pointer type angle
	//Angle plus(90.0);
	
	//std::cout << "The first fish turns: " << ang1->getAngle() << " degrees." << std::endl;
	//std::cout << "The second fish turns: " << ang2->getAngle() << " degrees." << std::endl;
	//std::cout << "The third fish turns: " << ang3->getAngle() << " degrees." << std::endl;
	//std::cout << "The fourth fish turns: " << ang4->getAngle() << " degrees." << std::endl << std::endl;
	//std::cout << "Movement one is: " << ang2->getAngle() + ang3->getAngle() << " degrees." << std::endl;
	//std::cout << "Movement two is: " << ang3->getAngle() - ang2->getAngle() << " degrees." << std::endl;
	//std::cout << "Movement three is: " << ang4->getAngle() / ang3->getAngle() << " degrees." << std::endl<<std::endl;
	//std::cout << "The new non-pointer angle on the stack is: " << plus.getAngle() <<std::endl;  // using a non-pointer type angle
