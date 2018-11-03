#include <iostream>
#include <exception>
#include <cmath>
#include <cstdlib>
#include <string>
#include "Angle.h"
#include "Log.h"
#include "Fish.h"
#include "Population.h"
#include "FlippyFish.h"
#include "DrunkenFish.h"

Angle::Angle() {
	this->angle = 0.0;
} // end of constructor

Angle::Angle(double angle) {
	this->angle = angle;
} // end of constructor

Angle::~Angle() {
	std::cout<<"destructing %lf" << angle << std::endl<<std::endl;
}  // end of destructor

double Angle::getAngle() const {
	return angle;
} // end of getAngle method

void Angle::set(double angle) {
	this->angle = angle;
} // end of set method

// add all the operator overloads

Angle Angle::operator+=(const Angle& angle) const {
	while(angle.getAngle() > 359)	{
		return Angle(angle += angle.getAngle()-360);
	} // end while
	return Angle(angle += angle.getAngle());
}	// end of operator+= overload

Angle Angle::operator-=(const Angle& angle) const {
	while(angle.getAngle() > 359)	{
	return Angle(angle -= angle.getAngle()-360);
	} // end while
	return Angle(angle += angle.getAngle());
}	// end of operator-= overload

double Angle::getSin() const {
	return sin(angle*M_PI/180.0);
} // end getSin() method

double Angle::getCos() const {
	return cos(angle*M_PI/180.0);	
} // end getCos() method

bool Angle::operator==(const Angle& angle) const {
	return angle == angle.getAngle();
}  // end of operator== overload
	
Angle::Angle(const Angle& angle) {
	*this = angle;
}  // end of copy constructor
	
std::ostream& operator<<(std::ostream& cout, const Angle& angle) {
	cout << angle;
	return cout;
}
	
	
	
	
	
