// Clayton
// MSJC ID: 0558597
// Assignment 6 - More Complex types
// integer class function definitions
#include <iostream>
#include <string>
#include "Integer.h"
#include "menu.h"

using namespace std;

void Integer::isNaN(const string& i)
{
	int tmp;
	this->nan = false;
	for (string::size_type tmp=0; tmp<i.size(); tmp++)
	{
		if (!(i[tmp]=='.'||(i[tmp]>='0'&&i[tmp]<='9')))
		{
			this->nan = true;
		}
	}
}
bool Integer::isNaN()
{
	return this->nan;
}
void Integer::equals(const string& i)
{
	isNaN(i);
	if (isNaN() == true)
	{
		cout << "Cannot assign a non-number to class Integer" << endl;
		this->equals(0);
	}
	else { this->equals(stoi(i)); }
	
}
Integer::Integer(const string& i)
{
	this->equals(i);
}





Integer::Integer()
{
	this->equals(0);
}

Integer::Integer(int n)
{
	this->equals(n);
}

Integer::Integer(const Integer& i)
{
	this->equals(i.n);
}

void Integer::equals(int i)
{
	n = i;
}
void Integer::equals(const Integer& i)
{
	this->equals(i.n);
}


Integer Integer::add(const Integer& i)
{
	Integer tmp;
	tmp.n = n + i.n;
	return tmp;
}

Integer Integer::add(int& i)
{
	Integer tmp;
	tmp.n = n + i;
	return tmp;
}


Integer Integer::sub(const Integer& i)
{
	Integer tmp;
	tmp.n = n - i.n;
	return tmp;
}

Integer Integer::sub(int& i)
{
	Integer tmp;
	tmp.n = n - i;
	return tmp;
}

Integer Integer::mul(const Integer& i)
{
	Integer tmp;
	tmp.n = n * i.n;
	return tmp;
}

Integer Integer::mul(int& i)
{
	Integer tmp;
	tmp.n = n * i;
	return tmp;
}

Integer Integer::div(const Integer& i)
{
	Integer tmp;
	tmp.n = (n / i.n);
	return tmp;
}

Integer Integer::div(int& i)
{
	Integer tmp;
	tmp.n = (n / i);
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
string Integer::toString() const
{
	string tmp;
	tmp = to_string(n);
	return tmp;
}


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
	return (this->n == i.n);
}
bool Integer::operator==(int i)const
{
	return (this->n == i);
}
bool Integer::operator!=(const Integer& i)
{
	return (this->n != i.n);
}


