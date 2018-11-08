// FILE: Angle.h
// ANGLE CLASS DEFINITION

#include <cstdio>
#include <iostream>

#ifndef ANGLE_H		// used to avoid multiple definitions
#define ANGLE_H

template<class T> class Angle {

private:

	T* angle;

public:

	Angle();					// non-argument constructor
	Angle(T* angle);		// argument constructor
	virtual ~Angle();			// virtual destructor
	
	T* getAngle() const;	// get method
	void set(T* angle);		// set method
	
	Angle operator+=(const Angle& angle) const;	// operator+= overload
	Angle operator-=(const Angle& angle) const;	// operator-= overload
	bool operator==(const Angle& angle) const;	// operator== overload
	
	T* getSin() const;		// getSin() method
	T* getCos() const;		// getCos() method

	Angle(const Angle& angle);	// copy constructor
		
	friend std::ostream& operator<<(std::ostream& out, const T& angle);
};  // end of Angle Class

std::ostream& operator<<(std::ostream& out, const T& angle);
#endif		// ANGLE_H