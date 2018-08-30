#include "compound.h"

double compound(double z) {
	// sets the variable x as the starting balance of $10,000
	int x = 10000;
	
	// defines the function as the interest noted as variable z divided by 100
	// then multiply that amount (which is the percentage interest) times the starting balance
	// finally adds that amount to the original starting balance to get the new balance after interest is added
	return z / 100 * x + x;
}