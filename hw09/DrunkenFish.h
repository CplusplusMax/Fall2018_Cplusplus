// FILE: DrunkenFish.h
// FISH CLASS DEFINITION

#ifndef DRUNKENFISH_H		// used to avoid multiple definitions
#define DRUNKENFISH_H

class DrunkenFish {

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


//DrunkenFish:Fish::Fish();
//DrunkenFish:Fish::~Fish(); // end of destructor

//void DrunkenFish:Fish::position();
//void DrunkenFish:Fish::position(double x, double y);
//double DrunkenFish:Fish::speed();
//double DrunkenFish:Fish::direction(const Angle& angle);
//double DrunkenFish:Fish::turn_rate(const Angle& angle);
//double DrunkenFish:Fish::getX() const;
//double DrunkenFish:Fish::getY() const;
//void DrunkenFish:Fish::set(double x, double y);

//double DrunkenFish::swim()