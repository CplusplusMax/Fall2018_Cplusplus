// FILE: Angle.h
// ANGLE CLASS DEFINITION

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
	
	// add Operator Overloads
	// operator+(const Angle& ang) const

};  // end of Angle Header file

#endif		// ANGLE_H