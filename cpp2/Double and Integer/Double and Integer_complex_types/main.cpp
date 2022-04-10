// Clayton
// MSJC ID: 0558597
// Assignment 6 - more complex types
// testing of double and integer classes
#include <iostream>
#include "Double.h"
#include "Integer.h"
#include "menu.h"

using namespace std;
void intAdd();
void intSub();
void intMul();
void intDiv();
void dblAdd();
void dblSub();
void dblMul();
void dblDiv();
void Exit();


Menu m;
int main()
{
	m.addMenu("1. Integer Add ", intAdd);
	m.addMenu("2. Integer Subtract", intSub);
	m.addMenu("3. Integer Multiply ", intMul);
	m.addMenu("4. Integer Divide ", intDiv);
	m.addMenu("5. Double Add ", dblAdd);
	m.addMenu("6. Double Subtract", dblSub);
	m.addMenu("7. Double Multiply ", dblMul);
	m.addMenu("8. Double Divide ", dblDiv);
	m.addMenu("9. Exit ", Exit);
	m.runMenu();

	return 0;
}
void intAdd()
{
	int a, b;
	cout << "Enter two Integers  " << endl;
	cin >> a >> b;

	Integer x(a);
	Integer y(b);

	Integer z = x + y;
	cout << "The sum is " << z.toInt() << endl;

	m.waitkey();
}
void intSub()
{
	int a, b;
	cout << "Enter two Integers  " << endl;
	cin >> a >> b;

	Integer x(a);
	Integer y(b);

	Integer z = x - y;
	cout << "The difference is " << z.toInt() << endl;
	m.waitkey();
}
void intMul()
{
	int a, b;
	cout << "Enter two Integers  " << endl;
	cin >> a >> b;

	Integer x(a);
	Integer y(b);

	Integer z = x * y;
	cout << "The product is " << z.toInt() << endl;
	m.waitkey();
}
void intDiv()
{
	int a, b;
	cout << "Enter two Integers  " << endl;
	cin >> a >> b;

	Integer x(a);
	Integer y(b);

	Integer z = x / y;
	cout << "The quotient is " << z.toInt() << endl;
	m.waitkey();
}
void dblAdd()
{
	double a, b;
	cout << "Enter two doubles  " << endl;
	cin >> a >> b;

	Double x(a);
	Double y(b);

	Double z = x + y;
	cout << "The sum is " << z.toDouble() << endl;
	m.waitkey();
}
void dblSub()
{
	double a, b;
	cout << "Enter two doubles  " << endl;
	cin >> a >> b;

	Double x(a);
	Double y(b);

	Double z = x - y;
	cout << "The difference is " << z.toDouble() << endl;
	m.waitkey();
}
void dblMul()
{
	double a, b;
	cout << "Enter two doubles  " << endl;
	cin >> a >> b;

	Double x(a);
	Double y(b);

	Double z = x * y;
	cout << "The product is " << z.toDouble() << endl;
	m.waitkey();
}
void dblDiv()
{
	double a, b;
	cout << "Enter two doubles  " << endl;
	cin >> a >> b;

	Double x(a);
	Double y(b);

	Double z = x / y;
	cout << "The quotient is " << z.toDouble() << endl;
	m.waitkey();
}
void Exit()
{
	exit(0);
}
