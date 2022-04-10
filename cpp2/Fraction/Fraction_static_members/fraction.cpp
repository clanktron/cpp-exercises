#include <iostream>
#include <string>
#include "Fraction.h"

using namespace std;

int Fraction::count = 0;

void Fraction::printcount()
{
	cout << "There are " << count << " instances of the Fraction class.\n";
}

Fraction::Fraction(std::string fraction)
{
	string space = " ";
	string::size_type pos = fraction.find(space, 0); //finding where the space between numbers occurs
	string::size_type len = fraction.length(); //finding length of string to be able to deduce length of second subtring aka denominator
	string str1 = fraction.substr(0, pos); //getting first substring aka first number (to be used as numerator)
	string str2 = fraction.substr(pos + 1, (len - (pos + 1))); //getting second substring (denominator)
	int tmp1 = stoi(str1); // conversion into integer data type
	int tmp2 = stoi(str2);
	this->setFraction(tmp1, tmp2); // setting numerator and denominator with respective parses from string
	count++;
}

Fraction::Fraction(const Fraction& f)
{
	this->create();
	this->setFraction(f.getNum(), f.getDen());
	count++;
}

Fraction::Fraction()
{
	this->create();
	this->setFraction(1, 1);
	count++;
}

Fraction::Fraction(int num, int den)
{
	this->create();
	this->setFraction(num, den);
	count++;
}

Fraction::~Fraction()
{
	delete this->den;
	delete this->num;
	count--;
}

void Fraction::create()
{
	this->num = new int;
	this->den = new int;
}

void Fraction::setFraction(int n, int d)
{
	*this->num = n;
	*this->den = d;
}

Fraction Fraction::add(const Fraction& f)
{
	Fraction tmp;
	*tmp.num = (*this->num * *f.den) + (*f.num * *this->den);
	*tmp.den = *f.den * *this->den;
	if (tmp.den < 0)
	{
		*tmp.num = *tmp.num * (-1);
		*tmp.den = *tmp.den * (-1);
	}
	return tmp;
}

Fraction Fraction::sub(const Fraction& f)
{
	Fraction tmp;
	*tmp.num = (*this->num * *f.den) - (*f.num * *this->den);
	*tmp.den = *f.den * *this->den;
	if (tmp.den < 0)
	{
		*tmp.num = *tmp.num * (-1);
		*tmp.den = *tmp.den * (-1);
	}
	return tmp;
}


Fraction Fraction::mul(const Fraction& f)
{
	Fraction tmp;
	*tmp.num = (*this->num * *f.num);
	*tmp.den = (*this->den * *f.den);
	if (tmp.den < 0)
	{
		*tmp.num = *tmp.num * (-1);
		*tmp.den = *tmp.den * (-1);
	}
	return tmp;
}

Fraction Fraction::div(const Fraction& f)
{
	Fraction tmp;
	*tmp.num = *this->num * *f.den;
	*tmp.den = *this->den * *f.num;
	if (tmp.den < 0)
	{
		*tmp.num = *tmp.num * (-1);
		*tmp.den = *tmp.den * (-1);
	}
	return tmp;
}

int Fraction::getNum()const
{
	return *this->num;
}

int Fraction::getDen()const
{
	return *this->den;
}


void Fraction::printFraction()
{
	cout << *this->num << "/" << *this->den << endl;
}


Fraction Fraction::operator + (const Fraction& f)
{
	return this->add(f);
}
Fraction Fraction::operator - (const Fraction& f)
{
	return this->sub(f);
}
Fraction Fraction::operator * (const Fraction& f)
{
	return this->mul(f);
}
Fraction Fraction::operator / (const Fraction& f)
{
	return this->div(f);
}

Fraction& Fraction::operator=(const Fraction& f)
{
	this->setFraction(f.getNum(), f.getDen());
	return *this;
}

istream& operator >> (istream& input, Fraction& f)
{
	cout << "Enter a numerator" << endl;
	input >> *f.num;
	cout << "Enter a denominator" << endl;
	input >> *f.den;
	return input;
}
ostream& operator << (ostream& output, Fraction& f)
{
	cout << "The numerator is ";
	output << *f.num << endl;
	cout << "The denominator is ";
	output << *f.den << endl;
	return output;
}



