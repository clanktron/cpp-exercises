// Clayton
// MSJC ID: 0558597
// Assignment 13 - Exceptions
// Number class function definitions
#include <iostream>
#include <string>
#include "Number.h"

//Constructors
Number::Number() : string()
{
}
Number::Number(string s) : string(s)
{
}

//Public Functions
string Number::toString()
{
	return *this;
}
bool Number::isNaN()
{
	return this->nan;
}