// Clayton
// MSJC ID: 0558597
// Assignment 2 - Class Construction
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
	void printInt();
	int toInt();
};
