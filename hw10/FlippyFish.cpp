// FILE: FlippyFish.cpp
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
#include "List.h"

FlippyFish::Fish();
FlippyFish::~Fish(); // end of destructor

void FlippyFish::position();
void FlippyFish::position(double x, double y);
double FlippyFish::speed();
double FlippyFish::direction(const Angle& angle){
	return angle;
}
double FlippyFish::turn_rate(const Angle& angle);
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


std::ostream& operator<<(std::ostream& cout, const Angle& angle) {
	cout<<angle;
	return cout;
}