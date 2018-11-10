// FILE: FlippyFish.cpp
#include <iostream>
#include <exception>
#include <cmath>
#include <cstdlib>
#include <string>
#include <array>
#include "Angle.h"
#include "Fish.h"
#include "FlippyFish.h"

FlippyFish::Fish();
FlippyFish::~Fish(); // end of destructor

void FlippyFish::position();
void FlippyFish::position(double x, double y);
double FlippyFish::speed();
FlippyFish::direction(const Angle<class T>& angle){
	return angle;
}
FlippyFish::turn_rate(const Angle<class T>& angle);
	return Angle(angle + angle.getAngle()/4);
}
double FlippyFish::getX() const;
double FlippyFish::getY() const;
void FlippyFish::set(double x, double y);

double FlippyFish::swim() {
	int choice = rand() % 3;
	if(choice == 0) direction -= turn_rate;
	else if(choice == 2) direction += turn_rate;
	x += speed * direction.getCos();
	y += speed * direction.getSin();
} // end of drunken fish swim method


std::ostream& operator<<(std::ostream& cout, const Angle<class T>& angle) {
	cout<<angle;
	return cout;
}