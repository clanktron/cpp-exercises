#include <iostream>
#include "Fraction.h"

using namespace std;

void Fraction::setFraction(int n, int d)
{
	num = n;
	den = d;
}

Fraction Fraction::add(const Fraction &f)
{
	Fraction tmp;
	tmp.num = (num * f.den) + (f.num * den);
	tmp.den = f.den * den;
	if(tmp.den<0)
	{
		tmp.num = tmp.num * (-1);
		tmp.den = tmp.den * (-1);
	}
	return tmp;
}

Fraction Fraction::sub(const Fraction &f)
{
	Fraction tmp;
	tmp.num = (num * f.den) - (f.num * f.den);
	tmp.den = f.den * den;
	if (tmp.den < 0)
	{
		tmp.num = tmp.num * (-1);
		tmp.den = tmp.den * (-1);
	}
	return tmp;
}

void Fraction::printFraction()
{
	cout << num << "/" << den << endl;
}

Fraction Fraction::multiply(const Fraction &f)
{
	Fraction tmp;
	tmp.num = (num * f.num);
	tmp.den = (den * f.den);
	if (tmp.den < 0)
	{
		tmp.num = tmp.num * (-1);
		tmp.den = tmp.den * (-1);
	}
	return tmp;
}

Fraction Fraction::divide(const Fraction& f)
{
	Fraction tmp;
	tmp.num = num * f.den;
	tmp.den = den * f.num;
	if (tmp.den < 0)
	{
		tmp.num = tmp.num * (-1);
		tmp.den = tmp.den * (-1);
	}
	return tmp;
}
