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
	int max_fFishes = 10000;
	int max_dFishes = 10000;
	FlippyFish* fFishes = new Fish*[max_fFishes];
	DrunkenFish* dFishes = new DrunkenFish*[max_dFishes];
} // end of constructor

Population::~Population() {
}  // end of destructor

Population::add(int fish) {
	for (int i = 0; i < max_fishes; ++i){
			dFishes++;
			fFishes++;
			
			fish = *dFishes + *fFishes;
	}	
	return fishes[fish];
}

Population::remove(int fish) {
	while (fishes[fish] >= fishes[1]) {
		for (int i = 0; i < max_fishes; ++i) {
			double dist = fish[i].getX() * fish[i].getX() + fish[i].getY() * fish[i].getY();
			double distance = double sqrt(dist);
		}
			if (distance > 100) {
				fish[i] = NULL;	
			}
	}	// end while loop
	
	return fishes[fish];
}

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
