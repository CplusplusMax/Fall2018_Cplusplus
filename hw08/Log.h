// FILE: Log.h
// LOG CLASS DEFINITION

#ifndef LOG_H		// used to avoid multiple definitions
#define LOG_H

class Log {

private:
	Log();		// no-argument constructor
	const std::string msg;

public:
	void pr(const std::string& msg);
	static Log& getInstance();
}; // end of Log class (singleton)
#endif		// end if statementd