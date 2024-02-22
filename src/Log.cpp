#include "Log.h"

void Log::error(const std::string& errorStr){
	std::cerr << errorStr;
}