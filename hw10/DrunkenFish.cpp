// FILE: DrunkenFish.cpp
#include <iostream>
#include <exception>
#include <cmath>
#include <cstdlib>
#include <string>
#include "Angle.h"
#include "Log.h"
#include "Fish.h"
#include "FlippyFish.h"
#include "DrunkenFish.h"

DrunkenFish::Fish();
DrunkenFish::~Fish(); // end of destructor

void DrunkenFish::position();
void DrunkenFish::position(double x, double y);
double DrunkenFish::speed();
double DrunkenFish::getX() const;
double DrunkenFish::getY() const;
void DrunkenFish::set(double x, double y);

double DrunkenFish::swim() {
	int choice = rand() % 4;
	if(choice == 0) x += speed;
	else if(choice == 1) y += speed;
	else if(choice == 2) y -= speed;
	else y -= speed;
} // end of drunken fish swim method

//std::ostream& operator<<(std::ostream& cout, const Angle& angle) {
//	cout<<angle;
//	return cout;
//}