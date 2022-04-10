// Clayton
// MSJC ID: 0558597
// Assignment 5 - Operator Overloading
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
	void equals(const Double& d);
	Double add(const Double &d);
	Double sub(const Double &d);
	Double mul(const Double &d);
	Double div(const Double &d);
	Double add(double d);
	Double sub(double d);
	Double mul(double d);
	Double div(double d);
	double toDouble() const;

	//Overloaded operators
	Double operator+(const Double& d);
	Double operator-(const Double& d);
	Double operator*(const Double& d);
	Double operator/(const Double& d);
	Double& operator=(const Double& d);
	Double& operator=(double d);
	bool operator==(const Double& d);
	bool operator==(double d)const;
	bool operator!=(const Double& d);
	


};

