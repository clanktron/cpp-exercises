// Clayton
// MSJC ID: 0558597
// Assignment 2 - Class Construction
// integer class function definitions
#include <iostream>
#include "Integer.h"

using namespace std;

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


Integer Integer::sub(const Integer& x)
{
	Integer tmp;
	tmp.n = n - x.n;
	return tmp;
}

Integer Integer::mul(const Integer& x)
{
	Integer tmp;
	tmp.n = n * x.n;
	return tmp;
}

Integer Integer::div(const Integer& x)
{
	Integer tmp;
	tmp.n = (n / x.n);
	return tmp;
}

void Integer::printInt()
{
	cout << n << endl;
}

int Integer::toInt()
{
	int tmp;
	tmp = n;
	return tmp;
}
