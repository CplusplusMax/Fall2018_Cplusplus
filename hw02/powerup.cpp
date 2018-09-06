#include "powerup.h"

int powerup(int base, int exp) {
	// declares the incremental variable "i" and declares and initializes the exponent variable "e" to 1
	int i;
	int e = 1;
	
	// for loop that initializes i to 1 and as long as i is less than the desired exponent, increases i by 1
	//     which then causes the internal equation to calculate each time i is incremented 
	for (i = 1; i <= exp; ++i)
		e = e * base;
		
	// returns the final value of e after all the incremented calculations have completed
	return e;
}