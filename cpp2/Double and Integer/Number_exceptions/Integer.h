// Clayton
// MSJC ID: 0558597
// Assignment 13 - Exceptions
// integer class declaration
#include <string>
#include "Number.h"
#pragma once

using std::string;
namespace Clayton
{
	class Integer : public Number
	{
	private:
		bool recursiveNaN(const string& i, int index, int decimal);
		void isNaN(const string& i);
	public:
		void equals(int i);
		void equals(const string& i);
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
		Integer(const string& i);

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
}