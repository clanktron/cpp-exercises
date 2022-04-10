#include <iostream>
#include <string>
#include "Fraction.h"

using namespace std;

Fraction::Fraction(std::string fraction)
{ 
	string space = " ";	
	string::size_type pos = fraction.find(space, 0); //finding where the space between numbers occurs
	string::size_type len = fraction.length(); //finding length of string to be able to deduce length of second subtring aka denominator
	string str1 = fraction.substr(0, pos); //getting first substring aka first number (to be used as numerator)
	string str2 = fraction.substr(pos+1, (len - (pos+1))); //getting second substring (denominator)
	int tmp1 = stoi(str1); // conversion into integer data type
	int tmp2 = stoi(str2);
	this->setFraction(tmp1, tmp2); // setting numerator and denominator with respective parses from string
}

Fraction::Fraction()
{
	this->setFraction(1, 1);
}

Fraction::Fraction(int num, int den)
{
	this->setFraction(num, den);
}

void Fraction::setFraction(int n, int d)
{
	this->num = n;
	this->den = d;
}

Fraction Fraction::add(const Fraction& f)
{
	Fraction tmp;
	tmp.num = (this->num * f.den) + (f.num * this->den);
	tmp.den = f.den * this->den;
	if (tmp.den < 0)
	{
		tmp.num = tmp.num * (-1);
		tmp.den = tmp.den * (-1);
	}
	return tmp;
}

Fraction Fraction::sub(const Fraction& f)
{
	Fraction tmp;
	tmp.num = (this->num * f.den) - (f.num * f.den);
	tmp.den = f.den * this->den;
	if (tmp.den < 0)
	{
		tmp.num = tmp.num * (-1);
		tmp.den = tmp.den * (-1);
	}
	return tmp;
}

void Fraction::printFraction()
{
	cout << this->num << "/" << this->den << endl;
}

Fraction Fraction::multiply(const Fraction& f)
{
	Fraction tmp;
	tmp.num = (this->num * f.num);
	tmp.den = (this->den * f.den);
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
	tmp.num = this->num * f.den;
	tmp.den = this->den * f.num;
	if (tmp.den < 0)
	{
		tmp.num = tmp.num * (-1);
		tmp.den = tmp.den * (-1);
	}
	return tmp;
}
