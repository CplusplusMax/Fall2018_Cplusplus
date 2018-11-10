// FILE: FlippyFish.h
// FLIPPYFISH CLASS DEFINITION
#include <iostream>
#include <string>
#include "Fish.h"
//#include "Angle.h"

#ifndef FLIPPYFISH_H		// used to avoid multiple definitions
#define FLIPPYFISH_H

class FlippyFish: public Fish {

//private:
	//T angle;
	//double x;
	//double y;

public:

	FlippyFish();	
	virtual ~FlippyFish();

	void position();
	void position(double x, double y);
	double speed();
	direction(const Angle<class T>& angle);
	turn_rate(const Angle<class T>& angle);
	double getX() const;
	double getY() const;
	void set(double x, double y);
	double swim();
	
	friend std::ostream& operator<<(std::ostream& cout, const Angle<class T>& angle);
	
}; // end of Fish class
#endif