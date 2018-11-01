// FILE: DrunkenFish.cpp
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

void DrunkenFish:Fish::position();
void DrunkenFish:Fish::position(double x, double y);
double DrunkenFish:Fish::speed();
double DrunkenFish:Fish::direction(const Angle& angle);
double DrunkenFish:Fish::turn_rate(const Angle& angle);
double DrunkenFish:Fish::getX() const;
double DrunkenFish:Fish::getY() const;
void DrunkenFish:Fish::set(double x, double y);

double DrunkenFish::swim() {
	int choice = rand() % 4;
	if(choice == 0) x += speed;
	else if(choice == 1) y += speed;
	else if(choice == 2) y -= speed;
	else y -= speed;
} // end of drunken fish swim method
std::ostream& operator<<(std::ostream& out, const Angle& angle) {
	out<<angle;
	return out;
}