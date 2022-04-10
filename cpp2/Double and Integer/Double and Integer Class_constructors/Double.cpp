// Clayton
// MSJC ID: 0558597
// Assignment 3 - Overloaded Constructors
// doubles class function definitions
#include <iostream>
#include "Double.h"

using namespace std;

Double::Double()
{
	this->equals(0.0);
}

Double::Double(double n)
{
	this->equals(n);
}

Double::Double(int n)
{
	double tmp = n;
	this->equals(tmp);
}

Double::Double(const Double& x)
{
	this->equals(x.n);
}

void Double::equals(double x)
{
	n = x;
}

Double Double::add(const Double& x)
{
	Double tmp;
	tmp.n = n + x.n;
	return tmp;
}


Double Double::sub(const Double& x)
{
	Double tmp;
	tmp.n = n - x.n;
	return tmp;
}

Double Double::mul(const Double& x)
{
	Double tmp;
	tmp.n = n * x.n;
	return tmp;
}

Double Double::div(const Double& x)
{
	Double tmp;
	tmp.n = (n / x.n);
	return tmp;
}

Double Double::add(double& x)
{
	Double tmp;
	tmp.n = n + x;
	return tmp;
}

Double Double::sub(double& x)
{
	Double tmp;
	tmp.n = n - x;
	return tmp;
}

Double Double::mul(double& x)
{
	Double tmp;
	tmp.n = n * x;
	return tmp;
}


Double Double::div(double& x)
{
	Double tmp;
	tmp.n = (n / x);
	return tmp;
}

void Double::printDouble()
{
	cout << n << endl;
}

double Double::toDouble() const
{
	double tmp;
	tmp = n;
	return tmp;
}



