#ifndef _LOG_HPP_
#define _LOG_HPP_

#include <fstream>
#include <stdint.h>
#include <string>
using namespace std;

class Log
{
private:
	static const uint8_t INDENT_WIDTH;

	bool _active;
	uint8_t _indent;
	ofstream _output;

	Log();
	~Log();
public:
	static Log &getInstance();
	void setActive(bool active);
	void indent() { _indent++; }
	void unIndent() { _indent--; }
	void write(const char *s, ...);
};

#endif

