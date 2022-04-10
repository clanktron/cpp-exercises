// Clayton
// MSJC ID: 0558597
// Assignment 4 - Vectors
// integer class declaration
#pragma once

class Integer
{
private:
	int n;
public:
	void equals(int x);
	Integer add(const Integer& x);
	Integer sub(const Integer& x);
	Integer mul(const Integer& x);
	Integer div(const Integer& x);
	Integer add(int& x);
	Integer sub(int& x);
	Integer mul(int& x);
	Integer div(int& x);


	void printInt();
	int toInt() const;

	//Constructors
	Integer();
	Integer(int n);
	Integer(const Integer& x);

};
