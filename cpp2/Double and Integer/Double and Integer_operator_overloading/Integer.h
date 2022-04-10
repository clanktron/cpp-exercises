// Clayton
// MSJC ID: 0558597
// Assignment 5 - Operator Overloading
// integer class declaration
#pragma once

class Integer
{
private:
	int n;
public:
	void equals(int i);
	void equals(const Integer& i);
	Integer add(const Integer& i);
	Integer sub(const Integer& i);
	Integer mul(const Integer& i);
	Integer div(const Integer& i);
	Integer add(int& i);
	Integer sub(int& i);
	Integer mul(int& i);
	Integer div(int& i);


	void printInt();
	int toInt() const;

	//Constructors
	Integer();
	Integer(int n);
	Integer(const Integer& i);

	//Overloaded operators
	Integer operator+(const Integer& i);
	Integer operator-(const Integer& i);
	Integer operator*(const Integer& i);
	Integer operator/(const Integer& i);
	Integer& operator=(const Integer& i);
	Integer& operator=(int i);
	bool operator==(const Integer& i);
	bool operator==(int i)const;
	bool operator!=(const Integer& i);

};
