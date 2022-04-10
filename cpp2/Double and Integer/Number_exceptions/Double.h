// Clayton
// MSJC ID: 0558597
// Assignment 13 - Exceptions
// doubles class declaration
#pragma once
#include <string>
#include "Integer.h"
#include "Number.h"
namespace Clayton
{
	class Double : public Number
	{
	private:
		bool recursiveNaN(const string& d, int index, int decimal);
		void isNaN(const string& d);
	public:
		// Constructors
		Double();
		Double(const string& d);
		Double(double d);
		
		//Public Functions
		void equals(double d);
		void equals(const string& d);
		Double add(const Double& d);
		Double sub(const Double& d);
		Double mul(const Double& d);
		Double div(const Double& d);
		Double add(double d);
		Double sub(double d);
		Double mul(double d);
		Double div(double d);
		double toDouble() const;
		void printDbl();

		//Overloaded operators
		Double operator+(const Double& d);
		Double operator-(const Double& d);
		Double operator*(const Double& d);
		Double operator/(const Double& d);
		Double& operator=(const Double& d);
		Double& operator=(double d);
		bool operator==(const Double& d);
		bool operator==(double d)const;
		bool operator!=(const Double& d);



	};

}