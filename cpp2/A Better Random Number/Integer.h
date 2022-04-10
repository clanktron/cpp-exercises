// Clayton
// MSJC ID: 0558597
// integer class declaration
#include <string>
#pragma once

using std::string;
namespace Clayton
{

	class Integer
	{
	private:
		int n;
		bool nan;
		void isNaN(const string& i);
	public:
		bool isNaN();
		void equals(int i);
		void equals(const Integer& i);
		void equals(const string& i);
		void equals(double d);
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
		string toString() const;

		//Constructors
		Integer();
		Integer(int n);
		Integer(double n);
		Integer(const Integer& i);
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