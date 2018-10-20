#include <cstdio>
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
	
	//if (angle < 360) {
		
		return Angle(angle + angle.getAngle());
		
		//return *this;
	//}
	//else {
		
	//	angle = angle + angle.getAngle() - 360;
		
	//	return *this;
	//}
}	// end of operator+ overload

Angle Angle::operator-(const Angle& angle) const {
	
	//if (angle < 360) {
		
		return Angle(angle - angle.getAngle());
		
		//return *this;
	//}
	//else {
	//	angle - angle.getAngle() - 360;
		
	//	return *this;
	//}
}	// end of operator- overload

Angle Angle::operator+=(const Angle& angle) const {
	
	//if (angle < 360) {
		
		return Angle(angle += angle.getAngle());
		
		//return *this;
	//}
	//else {
	//	return Angle(angle - angle.getAngle() - 360);
	//}
}	// end of operator+ overload

Angle Angle::operator-=(const Angle& angle) const {
	
	//if (angle < 360) {
		return Angle(angle -= angle.getAngle());
		
		//return *this;
	//}
	//else {
	//	angle -= angle.getAngle() - 360;
		
	//	return *this;
	//}
}	// end of operator+ overload

// *, /, *=, /=

// = for Angle, = for Angle, ==