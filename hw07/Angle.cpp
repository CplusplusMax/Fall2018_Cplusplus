#include <cstdio>
#include <iostream>
#include "Angle.h"

Angle::Angle() {
	
	this->angle = 0.0;
	
} // end of constructor

Angle::Angle(double angle) {

	this->angle = angle;
	
} // end of constructor

Angle::~Angle() {
	
	printf("destructing %lf\n", angle);
	
}  // end of destructor

double Angle::getAngle() const {

	return angle;

} // end of getAng1 method


void Angle::set(double angle) {

	this->angle = angle;
	
} // end of set method

// add all the operator overloads

Angle Angle::operator+(const Angle& angle) const {
	
	return Angle(angle + angle.getAngle());
		
}	// end of operator+ overload

Angle Angle::operator-(const Angle& angle) const {
	
		
	return Angle(angle - angle.getAngle());
	
}	// end of operator- overload

Angle Angle::operator+=(const Angle& angle) const {
	
		
	return Angle(angle += angle.getAngle());

}	// end of operator+= overload

Angle Angle::operator-=(const Angle& angle) const {
	
	return Angle(angle -= angle.getAngle());
		
}	// end of operator-= overload

bool Angle::operator==(const Angle& angle) const {
		
	return angle == angle.getAngle();
		
	}  // end of operator== overload
	
Angle Angle::operator=(const Angle& angle) const {
	
	return Angle(angle = angle.getAngle());
		
	} // end of operator= overload for angle
	
//Angle Angle::operator=(const double angle) const {
	
	//return angle = (*this)(const double angle);  // 
	
//}  // end of operator= overload for double

Angle Angle::operator*(const Angle& angle) const {
	
	return Angle(angle * angle.getAngle());
		
	} // end of operator* overload
	
Angle Angle::operator/(const Angle& angle) const {
	
	return Angle(angle / angle.getAngle());
		
	} // end of operator/ overload
	
Angle Angle::operator*=(const Angle& angle) const {
	
	return Angle(angle *= angle.getAngle());
		
	} // end of operator*= overload
	
Angle Angle::operator/=(const Angle& angle) const {
	
	return Angle(angle /= angle.getAngle());
		
	} // end of operator/= overload
