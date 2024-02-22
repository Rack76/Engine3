#ifndef LOG_H
#define LOG_H

#include <iostream>
#include <string>

class Log
{
public:
	static void error(const std::string& errorStr);
};

#endif