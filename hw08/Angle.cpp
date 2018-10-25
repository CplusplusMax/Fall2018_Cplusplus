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
	
	//Angle* limit = new Angle();
	
	//limit->set(360.0);
	Angle limit(360.0);
	Angle* added = new Angle();
	
	if ( Angle(angle + angle.getAngle()).getAngle() > limit.getAngle()) {
		
		added->set(Angle(angle + angle.getAngle()).getAngle() - 360);
	}
	else {
		added->set(Angle(angle + angle.getAngle()).getAngle());
	}
	return *added;

	//return Angle(angle + angle.getAngle());
		
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
	
//const double operator=(const double angle) {
	
	//Angle angle = (*this)angle;
	
	//return angle;
	
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

Angle::Angle(const Angle& angle) {
	
	*this = angle;
	
}  // end of copy constructor

	
	
std::ostream& operator<<(std::ostream& out, const Angle& angle) {
	
	out << angle;
	
	return out;
}
	
	
	
	
	
