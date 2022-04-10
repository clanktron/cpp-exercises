// Clayton
// MSJC ID: 0558597
// Assignment 3 - Overloaded Constructors
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
	Double add(double& x);
	Double sub(double& x);
	Double mul(double& x);
	Double div(double& x);

	void printDouble();
	double toDouble() const;

	//Constructors
	Double();
	Double(double n);
	Double(int n);
	Double(const Double& x);
};