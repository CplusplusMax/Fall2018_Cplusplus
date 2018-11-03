// FILE: DrunkenFish.h
// FISH CLASS DEFINITION
#include "Fish.h"
#ifndef DRUNKENFISH_H		// used to avoid multiple definitions
#define DRUNKENFISH_H

class DrunkenFish: public Fish {

//private:

	//double x;
	//double y;

public:

	DrunkenFish();	
	virtual ~DrunkenFish();

	void position();
	void position(double x, double y);
	double speed();
	double getX() const;
	double getY() const;
	void set(double x, double y);
	double swim();
	
	friend std::ostream& operator<<(std::ostream& out, const Angle& angle);
	
}; // end of Fish class
#endif