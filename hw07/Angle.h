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

	Angle();
	
	Angle(double angle);
	
	virtual ~Angle();
	
	double getAngle() const;
	
	void set(double angle);
	
	Angle operator+(const Angle& angle) const;
	
	Angle operator-(const Angle& angle) const;
	
	Angle operator+=(const Angle& angle) const;
	
	Angle operator-=(const Angle& angle) const;

	bool operator==(const Angle& angle) const;

	Angle operator=(const Angle& angle) const;
	
	//Angle operator=(const double angle) const;
	
	Angle operator*(const Angle& angle) const;
	
	Angle operator/(const Angle& angle) const;
	
	Angle operator*=(const Angle& angle) const;
	
	Angle operator/=(const Angle& angle) const;
		

};  // end of Angle Header file

#endif		// ANGLE_H