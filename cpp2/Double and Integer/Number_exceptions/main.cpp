// Clayton
// MSJC ID: 0558597
// Assignment 13 - Exceptions
// testing inheritance integration
#include <iostream>
#include <fstream>
#include "Double.h"
#include "Integer.h"
#include "menu.h"

using namespace std;
using namespace Clayton;

void addInt();
void subInt();
void mulInt();
void divInt();
void addDbl();
void subDbl();
void mulDbl();
void divDbl();

Menu m;

int main(){

	m.addMenu("1. Add Integer", addInt);
	m.addMenu("2. Sub Integer", subInt);
	m.addMenu("3. Mul Integer", mulInt);
	m.addMenu("4. Div Integer", divInt);
	m.addMenu("5. Add Double", addDbl);
	m.addMenu("6. Sub Double", subDbl);
	m.addMenu("7. Mul Double", mulDbl);
	m.addMenu("8. Div Double", divDbl);
	m.runMenu();
}

void addInt()
{
	try 
	{
		string a, b;
		cout << "Enter an Integer\n";
		cin >> a;
		Integer x(a);
		cout << "Enter an Integer\n";
		cin >> b;
		Integer y(b), z;
		z = x + y;
		z.printInt();
	}
	catch(NumberException n)
	{
		cout << n.getMessage();
		exit(1);
	}
	catch (...) 
	{
		cout << "Uknown error" << endl;
	}
	m.waitkey();
}

void subInt()
{
	try
	{
		string a, b;
		cout << "Enter an Integer\n";
		cin >> a;
		Integer x(a);
		cout << "Enter an Integer\n";
		cin >> b;
		Integer y(b), z;
		z = x - y;
		z.printInt();
	}
	catch (NumberException n)
	{
		cout << n.getMessage();
		exit(1);
	}
	catch (...)
	{
		cout << "Uknown error" << endl;
	}
	m.waitkey();
}

void mulInt()
{
	try
	{
		string a, b;
		cout << "Enter an Integer\n";
		cin >> a;
		Integer x(a);
		cout << "Enter an Integer\n";
		cin >> b;
		Integer y(b), z;
		z = x * y;
		z.printInt();
	}
	catch (NumberException n)
	{
		cout << n.getMessage();
		exit(1);
	}
	catch (...)
	{
		cout << "Uknown error" << endl;
	}
	m.waitkey();
}

void divInt()
{
	try
	{
		string a, b;
		cout << "Enter an Integer\n";
		cin >> a;
		Integer x(a);
		cout << "Enter an Integer\n";
		cin >> b;
		Integer y(b), z;
		z = x / y;
		z.printInt();
	}
	catch (NumberException n)
	{
		cout << n.getMessage();
		exit(1);
	}
	catch (...)
	{
		cout << "Uknown error" << endl;
	}
	m.waitkey();
}

void addDbl()
{
	try
	{
		string a, b;
		cout << "Enter an Double\n";
		cin >> a;
		Double x(a);
		cout << "Enter an Double\n";
		cin >> b;
		Double y(b), z;
		z = x + y;
		z.printDbl();
	}
	catch (NumberException n)
	{
		cout << n.getMessage();
		exit(1);
	}
	catch (...)
	{
		cout << "Uknown error" << endl;
	}
	m.waitkey();
}

void subDbl()
{
	try
	{
		string a, b;
		cout << "Enter an Double\n";
		cin >> a;
		Double x(a);
		cout << "Enter an Double\n";
		cin >> b;
		Double y(b), z;
		z = x - y;
		z.printDbl();
	}
	catch (NumberException n)
	{
		cout << n.getMessage();
		exit(1);
	}
	catch (...)
	{
		cout << "Uknown error" << endl;
	}
	m.waitkey();
}

void mulDbl()
{
	try
	{
		string a, b;
		cout << "Enter an Double\n";
		cin >> a;
		Double x(a);
		cout << "Enter an Double\n";
		cin >> b;
		Double y(b), z;
		z = x * y;
		z.printDbl();
	}
	catch (NumberException n)
	{
		cout << n.getMessage();
		exit(1);
	}
	catch (...)
	{
		cout << "Uknown error" << endl;
	}
	m.waitkey();
}

void divDbl()
{
	try
	{
		string a, b;
		cout << "Enter an Double\n";
		cin >> a;
		Double x(a);
		cout << "Enter an Double\n";
		cin >> b;
		Double y(b), z;
		z = x / y;
		z.printDbl();
	}
	catch (NumberException n)
	{
		cout << n.getMessage();
		exit(1);
	}
	catch (...)
	{
		cout << "Uknown error" << endl;
	}
	m.waitkey();
}