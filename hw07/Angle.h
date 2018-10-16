#ifndef ANGLE_H
#define ANGLE_H

class Angle {

private:

	double x;
	double y;

public:

	Angle();
	
	Angle(double x, double y);
	
	virtual ~Angle();
	
	double getX() const;
	double getY() const;
	
	void set(double x, double y);

};  // end of Angle Header file

#endif