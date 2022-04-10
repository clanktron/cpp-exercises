// Clayton
// MSJC ID: 0558597
// Assignment 2 - Class Construction
// doubles class declaration
#pragma once

class Double
{
private:
	double n;
public:
	void equals(double x);
	Double add(const Double& x);
	Double sub(const Double& x);
	Double mul(const Double& x);
	Double div(const Double& x);
	void printDouble();
	double toDouble();
};