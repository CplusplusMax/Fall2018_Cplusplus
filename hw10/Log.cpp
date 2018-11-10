#include <iostream>
#include <exception>
#include <cmath>
#include <cstdlib>
#include <string>
#include "Angle.h"
#include "Log.h"
#include "Fish.h"

Log::Log() {
	this->msg  = "Good so far.";
} // end of constructor

Log::~Log() {
	printf("destructing %s\n", msg);
}  // end of destructor

Log& Log::getInstance() {
	static Log instance;
	return instance;
}

void Log::pr(const std::string& msg) {
	//return 0;
}

std::ostream& operator<<(std::ostream& cout, const Log& msg) {
	cout<<msg;
	return cout;
}


//Log::Log(const std::string& msg) {
//	this->msg = msg;
//} // end of constructor