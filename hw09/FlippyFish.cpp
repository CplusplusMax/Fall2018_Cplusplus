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

DrunkenFish:Fish::Fish();
DrunkenFish:Fish::~Fish(); // end of destructor

void FlippyFish:Fish::position();
void FlippyFish:Fish::position(double x, double y);
double FlippyFish:Fish::speed();
double FlippyFish:Fish::direction(const Angle& angle);
double FlippyFish:Fish::turn_rate(const Angle& angle);
double FlippyFish:Fish::getX() const;
double FlippyFish:Fish::getY() const;
void FlippyFish:Fish::set(double x, double y);

double FlippyFish::swim() {
	int choice = rand() % 3;
	if(choice == 0) direction -= turn_rate;
	else if(choice == 2) direction += turn_rate;
	x += speed * direction.getCos();
	y += speed * direction.getSin();
} // end of drunken fish swim method

std::ostream& operator<<(std::ostream& out, const Angle& angle) {
	out<<angle;
	return out;
}



std::ostream& operator<<(std::ostream& out, const Angle& angle) {
	out<<angle;
	return out;
}