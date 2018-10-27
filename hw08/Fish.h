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

	position();
	position(double x, double y);
	double speed();
	double direction(const Angle& angle);
	double turn_rate(const Angle& angle);
	double getX() const;
	double getY() const;
	void set(double x, double y);
	double swim();
	
	friend std::ostream& operator<<(std::ostream& out, const Angle& angle);
	
}; // end of Fish class
#endif