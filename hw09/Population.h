// FILE: Population.h
// POPULATION CLASS DEFINITION

#ifndef POPULATION_H		// used to avoid multiple definitions
#define POPULATION_H

class Population {

private:
	Fish** fishes = new Fish*[10000];
	//Fish* fishes = new Fish*[int];;
	
public:
	Population();	
	virtual ~Population();

	add(int fish);
	remove(int fish);
	double size();
	double* getPos(int fish, double x, double y) const;
	
	friend std::ostream& operator<<(std::ostream& out, const Population& population);
	
}; // end of Population class
#endif