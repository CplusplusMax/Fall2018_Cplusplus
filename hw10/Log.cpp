#include <iostream>
#include <exception>
#include <cmath>
#include <cstdlib>
#include <string>
#include "Angle.h"
#include "Log.h"
#include "Fish.h"
#include "Population.h"
#include "List.h"

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



//Log::Log(const std::string& msg) {
//	this->msg = msg;
//} // end of constructor