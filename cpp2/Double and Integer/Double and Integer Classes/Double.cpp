// Clayton
// MSJC ID: 0558597
// Assignment 2 - Class Construction
// doubles class function definitions
#include <iostream>
#include "Double.h"

using namespace std;

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

void Double::printDouble()
{
	cout << n << endl;
}

double Double::toDouble()
{
	double tmp;
	tmp = n;
	return tmp;
}



