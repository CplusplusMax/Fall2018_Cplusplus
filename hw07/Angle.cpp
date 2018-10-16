#include <cstdio>
#include "Angle.h"

Angle::Angle() {
	
	this->x = 0.0;
	this->y = 0.0;
	
} // end of constructor

Angle::Angle(double x, double y) {

	this->x = x;
	this->y = y;
	
} // end of constructor

Angle::~Angle() {
}  // end of destructor

double Angle::getX() const {

	return x;

} // end of getX method

double Angle::getY() const {

	return y;

} // end of getY method

void Angle::set(double x, double y) {

	this->x = x;
	this->y = y;
	
} // end of set method