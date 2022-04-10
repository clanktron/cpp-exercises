// Clayton
// MSJC ID: 0558597
// Assignment 13 - Polymorphism
// Number class declaration
#pragma once
#include <string>
using namespace std;
class Number : public string
{
protected:
	bool nan;
public:
	virtual string toString();
	bool isNaN();
	virtual void isNaN(const string& i)=0;

	//Constructors
	Number();
	Number(string s);

};