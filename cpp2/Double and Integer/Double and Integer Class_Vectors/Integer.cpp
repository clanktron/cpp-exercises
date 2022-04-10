// Clayton
// MSJC ID: 0558597
// Assignment 4 - Vectors
// integer class function definitions
#include <iostream>
#include "Integer.h"
#include "menu.h"

using namespace std;

Integer::Integer()
{
	this->equals(0);
}

Integer::Integer(int n)
{
	this->equals(n);
}

Integer::Integer(const Integer& x)
{
	this->equals(x.n);
}

void Integer::equals(int x)
{
	n = x;
}

Integer Integer::add(const Integer& x)
{
	Integer tmp;
	tmp.n = n + x.n;
	return tmp;
}

Integer Integer::add(int& x)
{
	Integer tmp;
	tmp.n = n + x;
	return tmp;
}


Integer Integer::sub(const Integer& x)
{
	Integer tmp;
	tmp.n = n - x.n;
	return tmp;
}

Integer Integer::sub(int& x)
{
	Integer tmp;
	tmp.n = n - x;
	return tmp;
}

Integer Integer::mul(const Integer& x)
{
	Integer tmp;
	tmp.n = n * x.n;
	return tmp;
}

Integer Integer::mul(int& x)
{
	Integer tmp;
	tmp.n = n * x;
	return tmp;
}

Integer Integer::div(const Integer& x)
{
	Integer tmp;
	tmp.n = (n / x.n);
	return tmp;
}

Integer Integer::div(int& x)
{
	Integer tmp;
	tmp.n = (n / x);
	return tmp;
}

void Integer::printInt()
{
	cout << n << endl;
}

int Integer::toInt() const
{
	int tmp;
	tmp = n;
	return tmp;
}


