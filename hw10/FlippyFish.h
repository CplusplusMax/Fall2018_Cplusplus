// FILE: FlippyFish.h
// FLIPPYFISH CLASS DEFINITION
#include "Fish.h"
#ifndef FLIPPYFISH_H		// used to avoid multiple definitions
#define FLIPPYFISH_H

class FlippyFish: public Fish {

//private:

	//double x;
	//double y;

public:

	FlippyFish();	
	virtual ~FlippyFish();

	void position();
	void position(double x, double y);
	double speed();
	T direction(const Angle& angle);
	T turn_rate(const Angle& angle);
	double getX() const;
	double getY() const;
	void set(double x, double y);
	double swim();
	
	//friend std::ostream& operator<<(std::ostream& cout, const Angle& angle);
	
}; // end of Fish class
#endif