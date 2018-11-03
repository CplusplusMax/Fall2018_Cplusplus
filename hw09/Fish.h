// FILE: Fish.h
// FISH CLASS DEFINITION

#ifndef FISH_H		// used to avoid multiple definitions
#define FISH_H

class Fish {

private:

	double x;
	double y;

public:

	Fish();	
	virtual ~Fish();

	virtual void position();
	virtual void position(double x, double y);
	virtual double speed();

	double getX() const;
	double getY() const;
	virtual void set(double x, double y);
	virtual double swim()=0;
	
	friend std::ostream& operator<<(std::ostream& cout, const Angle& angle);
	
}; // end of Fish class
#endif