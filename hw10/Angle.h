// FILE: Angle.h
// ANGLE CLASS DEFINITION

#include <cstdio>
#include <iostream>
#include <exception>
#include <cmath>
#include <cstdlib>
#include <string>
#include "Angle.h"
#include "Log.h"
#include "Fish.h"
#include <array>	// removed the population class and am using the STL collection array

#ifndef ANGLE_H		// used to avoid multiple definitions
#define ANGLE_H

template<class T> class Angle {

private:
	T angle;

public:
	Angle(){					// non-argument constructor
		this->angle = 0.0;
	} // end of constructor
	Angle(T angle) {	// argument constructor
		this->angle = angle;
	} // end of constructor
	virtual ~Angle(){			// virtual destructor
		std::cout<<"destructing %lf" << angle << std::endl<<std::endl;
	}  // end of destructor
	T getAngle() const {	// get method
		return angle;
	} // end of getAngle method
	void set(T angle){		// set method
		this->angle = angle;
	} // end of set method
	Angle operator+=(const Angle& angle) const {	// operator+= overload
		while(angle.getAngle() > 359)	{
			return Angle(angle += angle.getAngle()-360);
			break;
		} // end while
		return Angle(angle += angle.getAngle());
	}	// end of operator+= overload
	Angle operator-=(const Angle& angle) const {	// operator-= overload
		while(angle.getAngle() > 359)	{
			return Angle(angle -= angle.getAngle()-360);
			break;
		} // end while
		return Angle(angle += angle.getAngle());
	}	// end of operator-= overload
	bool operator==(const Angle& angle) const {	// operator== overload
		return angle == angle.getAngle();
	}  // end of operator== overload
	double getSin() const {
		return sin(angle*M_PI/180.0);
	} // end getSin() method
	double getCos() const {
		return cos(angle*M_PI/180.0);	
	} // end getCos() method
	Angle(const Angle& angle) {	// copy constructor
		*this = angle;
	}  // end of copy constructor	
		friend std::ostream& operator<<(std::ostream& out, const Angle& angle);
};  // end of Angle Class
std::ostream& operator<<(std::ostream& out, const Angle& angle){
	out << angle;
	return out;
}
#endif		// ANGLE_H

// std::ostream& operator<<(std::ostream& out, const Angle& angle); (was line below };)

//std::ostream& operator<<(std::ostream& cout, const Angle& angle) {
	//cout << angle;
	//return cout;
//}