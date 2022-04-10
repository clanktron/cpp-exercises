// Clayton
// MSJC ID: 0558597
// Assignment 10 - Recursion
// doubles class function definitions
#include <iostream>
#include <string>
#include "Double.h"
#include "Integer.h"

using namespace std;

namespace Clayton
{
	//Private Functions
	bool Double::recursiveNaN(const string& d, int index, int decimal)
	{
		if (index == d.length())
			return(this->nan);
		else if ((!(d[index] == '.' || (d[index] >= '0' && d[index] <= '9'))) || (decimal > 1))
		{
			this->nan = true;
		}
		else if (d[index] == '.') {
			decimal++;
		}
		recursiveNaN(d, index + 1, decimal);
	}
	void Double::isNaN(const string& d)
	{
		this->nan = false;
		recursiveNaN(d, 0, 0);
	}

	//Constructors
	Double::Double()
		:Double(0.0)
	{

	}
	Double::Double(const Double& d)
		: Double(d.toDouble())
	{

	}
	Double::Double(double d)
	{
		equals(d);
	}
	Double::Double(const string& d)
	{
		this->equals(d);
	}

	//Public Functions
	bool Double::isNaN()
	{
		return this->nan;
	}
	void Double::equals(const string& d)
	{
		isNaN(d);
		if (isNaN() == true)
		{
			cout << "Cannot assign a non-number to class Integer" << endl;
			this->equals(0);
		}
		else { this->equals(stod(d)); }
	}
	void Double::equals(double d)
	{
		data = d;
	}
	void Double::equals(const Double& d)
	{
		this->equals(d.data);
	}
	void Double::printDbl()
	{
		cout << data << endl;
	}
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
	string Double::toString() const
	{
		string tmp;
		tmp = to_string(data);
		return tmp;
	}

	//Overloaded Operators
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

}