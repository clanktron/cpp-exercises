#pragma once
#include <string>

class Number : public std::string
{
public:
	Number() : std::string("0") {};
	Number(std::string s) : std::string(s) {};
};
