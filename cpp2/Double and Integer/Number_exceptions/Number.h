// Clayton
// MSJC ID: 0558597
// Assignment 13 - Exceptions
// Number and NumberException class declaration
#pragma once
#include <string>
#include <exception>
using namespace std;
class Number : public string
{
protected:
	bool nan;
public:
	//Basic Functions
	virtual string toString();
	bool isNaN();
	virtual void isNaN(const string& i)=0;

	//Constructors
	Number();
	Number(string s);
};

class NumberException : public exception
{
protected:
	int errorcode;
	string message;
public:
	//Basic Functions
	string getMessage() { return message; }
	int getCode() { return errorcode; }

	//Constructors
	NumberException() : errorcode(-1), message("Unknown") {}
	NumberException(string msg) : errorcode(-1), message(msg) {}
	NumberException(int code, string msg) : errorcode(-1), message(msg) {}
};