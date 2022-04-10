// Clayton
// MSJC ID: 0558597
// Assignment 5 - Operator Overloading
// doubles class function definitions
#include <iostream>
#include <string>
#include "Double.h"
#include "Integer.h"

using namespace std;

Double::Double()
	:Double(0.0)
{

}

Double::Double(const Double& d)
	: Double(d.toDouble())
{

}
Double::Double(const Integer& i)
	: Double(static_cast<double>(i.toInt()))
{

}
Double::Double(double d)
{
	equals(d);
}

void Double::equals(double d)
{
	data = d;
}
void Double::equals(const Double& d)
{
	this->equals(d.data);
}

//Primitives
Double Double::add(double d)
{
	Double tmp(this->toDouble() + d);
	return tmp;
}
Double Double::sub(double d)
{
	Double tmp(this->toDouble() - d);
	return tmp;
}
Double Double::mul(double d)
{
	Double tmp(this->toDouble() * d);
	return tmp;
}
Double Double::div(double d)
{
	Double tmp(this->toDouble() / d);
	return tmp;
}
//Complex

Double Double::add(const Double& d)
{
	return Double(this->toDouble() + d.toDouble());
}
Double Double::sub(const Double& d)
{
	return Double(this->toDouble() - d.toDouble());
}
Double Double::mul(const Double& d)
{
	return Double(this->toDouble() * d.toDouble());
}
Double Double::div(const Double& d)
{
	return Double(this->toDouble() / d.toDouble());
}
double Double::toDouble() const
{
	return data;
}


Double Double::operator+(const Double& d)
{
	return this->add(d);
}
Double Double::operator-(const Double& d)
{
	return this->sub(d);
}
Double Double::operator*(const Double& d)
{
	return this->mul(d);
}
Double Double::operator/(const Double& d)
{
	return this->div(d);
}
Double& Double::operator=(const Double& d)
{
	this->equals(d);
	return *this;
}
Double& Double::operator=(double d)
{
	this->equals(d);
	return *this;
}
bool Double::operator==(const Double& d) 
{
	return (this->data == d.data);
}
bool Double::operator==(double d)const
{
	return (this->data == d);
}
bool Double::operator!=(const Double& d)
{
	return (this->data != d.data);
}

