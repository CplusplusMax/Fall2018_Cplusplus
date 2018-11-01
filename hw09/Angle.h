// FILE: Angle.h
// ANGLE CLASS DEFINITION

#include <cstdio>
#include <iostream>

#ifndef ANGLE_H		// used to avoid multiple definitions
#define ANGLE_H

class Angle {

private:

	double angle;

public:

	Angle();					// non-argument constructor
	Angle(double angle);		// argument constructor
	virtual ~Angle();			// virtual destructor
	
	double getAngle() const;	// get method
	void set(double angle);		// set method
	
	Angle operator+=(const Angle& angle) const;	// operator+= overload
	Angle operator-=(const Angle& angle) const;	// operator-= overload
	bool operator==(const Angle& angle) const;	// operator== overload
	
	double getSin() const;		// getSin() method
	double getCos() const;		// getCos() method

	Angle(const Angle& angle);	// copy constructor
		
	friend std::ostream& operator<<(std::ostream& out, const Angle& angle);
};  // end of Angle Class

std::ostream& operator<<(std::ostream& out, const Angle& angle);
#endif		// ANGLE_H