#include <iostream>
#include <exception>
#include <cmath>
#include <cstdlib>
#include <string>
#include "Angle.h"
#include "Log.h"
#include "Fish.h"


Fish::Fish() {
}
Fish::~Fish() {
}  // end of destructor
void Fish::position() {
	this->x = 0.0;
	this->y = 0.0;
} // end of no-argument constructor
void Fish::position(double x, double y) {
	this->x = x;
	this->y = y;
} // end of constructor
double Fish::speed(){
	return 30;
}
double Fish::getX() const {
	return x;
} // end of getX() method
double Fish::getY() const {
	return y;
} // end of getY() method
void Fish::set(double x, double y) {
	this->x = x;
	this->y = y;
} // end of set() method

//std::ostream& operator<<(std::ostream& cout, const Fish& angle) {
//	cout<<angle;
//	return cout;
//}



