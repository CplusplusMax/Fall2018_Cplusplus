// FILE: FlippyFish.h
// FLIPPYFISH CLASS DEFINITION

#ifndef FLIPPYFISH_H		// used to avoid multiple definitions
#define FLIPPYFISH_H

class FlippyFish {

private:

	double x;
	double y;

public:

	Fish();	
	virtual ~Fish();

	void position();
	void position(double x, double y);
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