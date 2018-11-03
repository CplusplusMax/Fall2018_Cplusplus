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

Population::Population() {
}
Population::~Population() {
}  // end of destructor

Population::add(int fish) {
	return fishes[fish];
} // end of no-argument constructor

Population::remove(int fish) {
	return fishes[fish];
} // end of constructor

double Population::size(){
	return 30;
}

double* Population::getPos(int fish, double x, double y) {
	return fishes[fish].getPos(double x, double y);
}

std::ostream& operator<<(std::ostream& cout, const Population& fishes[]) {
	cout<<fishes[];
	return out;
}
