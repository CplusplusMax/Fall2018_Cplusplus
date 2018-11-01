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

double Fish::direction(const Angle& angle) {
	return angle;
}

double Fish::turn_rate(const Angle& angle) {
	return Angle(angle + angle.getAngle()/4);
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

double Fish::swim() {
	int choice = rand() % 3;
	if(choice == 0) direction -= turn_rate;
	else if(choice == 2) direction += turn_rate;
	x += speed * direction.getCos();
	y += speed * direction.getSin();

std::ostream& operator<<(std::ostream& out, const Angle& angle) {
	out<<angle;
	return out;
}



