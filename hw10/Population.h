// FILE: Population.h
// POPULATION CLASS DEFINITION

#ifndef POPULATION_H		// used to avoid multiple definitions
#define POPULATION_H
#include "FlippyFish.h"
#include "DrunkenFish.h"

class Population {

private:
	FlippyFish** fishes;
	DrunkenFish** dfishes;

	public:
	Population();	
	virtual ~Population();

	add(int fish);
	remove(int fish);
	double size();
	double* getPos(int fish, double x, double y) const;
	
	friend std::ostream& operator<<(std::ostream& cout, const Population& population);
	
}; // end of Population class
#endif