// Clayton
// MSJC ID: 0558597
// Assignment 13 - Exceptions
// integer class function definitions
#include <iostream>
#include <string>
#include "Integer.h"
#include "menu.h"

using namespace std;

namespace Clayton
{
	//Private functions
	bool Integer::recursiveNaN(const string& i, int index, int decimal)
	{
		if (index == i.length())
			return(this->nan);
		else if (index == 0 && i[index] == '-') {
			//it's fine
		}
		else if ((!(i[index] == '.' || (i[index] >= '0' && i[index] <= '9'))) || (decimal > 1))
		{
			this->nan = true;
		}
		else if (i[index] == '.') {
			decimal++;
		}
		recursiveNaN(i, index + 1, decimal);
	}
	void Integer::isNaN(const string& i)
	{
		this->nan = false;
		recursiveNaN(i, 0, 0);
	}

	//Constructors
	Integer::Integer() : Number()
	{
	}
	Integer::Integer(int n) : Number(to_string(n))
	{
	}
	Integer::Integer(const string& i)
	{
		this->equals(i);
	}
	


	//Public Functions
	void Integer::equals(int i)
	{
		this->equals(to_string(i));
	}
	void Integer::equals(const string& i)
	{
		isNaN(i);
		if (Number::isNaN() == true)
		{
			throw NumberException("Not a number");
		}
		else {
			string::operator=(i);
		}
	}
	Integer Integer::add(const Integer& i)
	{
		int sol = i.toInt() + this->toInt();
		return Integer(sol);
	}
	Integer Integer::sub(const Integer& i)
	{
		int sol = this->toInt() - i.toInt();
		return Integer(sol);
	}
	Integer Integer::mul(const Integer& i)
	{
		int sol = i.toInt() * this->toInt();
		return Integer(sol);
	}
	Integer Integer::div(const Integer& i)
	{
		int sol = this->toInt() / i.toInt();
		return Integer(sol);
	}
	Integer Integer::add(int& i)
	{
		int sol = i + this->toInt();
		return Integer(sol);
	}
	Integer Integer::sub(int& i)
	{
		int sol = i - this->toInt();
		return Integer(sol);
	}
	Integer Integer::mul(int& i)
	{
		int sol = i * this->toInt();
		return Integer(sol);
	}
	Integer Integer::div(int& i)
	{
		int sol = this->toInt() / i;
		return Integer(sol);
	}
	void Integer::printInt()
	{
		string sol = this->toString();
		cout << sol << endl;
	}
	int Integer::toInt() const
	{
		return std::stoi(*this);
	}
	
	
	

	//Overloaded Operators
	Integer Integer::operator+(const Integer& i)
	{
		return this->add(i);
	}
	Integer Integer::operator-(const Integer& i)
	{
		return this->sub(i);
	}
	Integer Integer::operator*(const Integer& i)
	{
		return this->mul(i);
	}
	Integer Integer::operator/(const Integer& i)
	{
		return this->div(i);
	}
	Integer& Integer::operator=(const Integer& i)
	{
		this->equals(i);
		return *this;
	}
	Integer& Integer::operator=(int i)
	{
		this->equals(i);
		return *this;
	}
	bool Integer::operator==(const Integer& i)
	{
		return (*this == i);
	}
	bool Integer::operator==(int i)const
	{
		return (this->toInt() == i);
	}
	bool Integer::operator!=(const Integer& i)
	{
		return (*this != i);
	}

}
