#include <cstdio>
#include "swaahp.h"
	
	void swaahp(int* one, int* two) {

		if(one > two){

		int max = *one;
		// switch the number values
		*one = *two;
		*two = max;
		}
		
					
}