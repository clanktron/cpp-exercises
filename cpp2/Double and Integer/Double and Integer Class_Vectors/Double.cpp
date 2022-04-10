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