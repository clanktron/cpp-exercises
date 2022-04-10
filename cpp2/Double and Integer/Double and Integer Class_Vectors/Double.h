// Clayton
// MSJC ID: 0558597
// Assignment 4 - Vectors
// doubles class declaration
#pragma once
#include "Integer.h"

class Double
{
private:
	double data;

public:

	// Constructors
	Double();
	Double(double d);
	Double(const Double &d);
	Double(const Integer &i);

	void equals(double d);
	Double add(const Double &d);
	Double sub(const Double &d);
	Double mul(const Double &d);
	Double div(const Double &d);
	Double add(double d);
	Double sub(double d);
	Double mul(double d);
	Double div(double d);
	double toDouble() const;

};

