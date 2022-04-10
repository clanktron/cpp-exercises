// Clayton
// MSJC ID: 0558597
// Assignment 8 - Namespaces, Static Variables
// testing of double and integer classes
#include <iostream>
#include "Double.h"
#include "Integer.h"
#include "menu.h"

using namespace std;
using namespace Clayton;

void intAdd();
void intSub();
void intMul();
void intDiv();
void dblAdd();
void dblSub();
void dblMul();
void dblDiv();
void Exit();

int main()
{
	Menu* m = Menu::Instance();
	m->addMenu("1. Integer Add ", intAdd);
	m->addMenu("2. Integer Subtract", intSub);
	m->addMenu("3. Integer Multiply ", intMul);
	m->addMenu("4. Integer Divide ", intDiv);
	m->addMenu("5. Double Add ", dblAdd);
	m->addMenu("6. Double Subtract", dblSub);
	m->addMenu("7. Double Multiply ", dblMul);
	m->addMenu("8. Double Divide ", dblDiv);
	m->addMenu("9. Exit ", Exit);
	m->runMenu();

	return 0;
}
void intAdd()
{
	Menu* m = Menu::Instance();
	int a, b;
	cout << "Enter two Integers  " << endl;
	cin >> a >> b;

	Integer* x = new Integer(a);
	Integer* y = new Integer(b);

	Integer* z = new Integer();
	*z = *x + *y;

	cout << "The sum is " << z->toInt() << endl;
	delete z;
	delete y;
	delete x;
	m->waitkey();
}
void intSub()
{
	Menu* m = Menu::Instance();
	int a, b;
	cout << "Enter two Integers  " << endl;
	cin >> a >> b;

	Integer* x = new Integer(a);
	Integer* y = new Integer(b);

	Integer* z = new Integer();
	*z = *x - *y;
	cout << "The difference is " << z->toInt() << endl;
	delete z;
	delete y;
	delete x;
	m->waitkey();
}
void intMul()
{
	Menu* m = Menu::Instance();
	int a, b;
	cout << "Enter two Integers  " << endl;
	cin >> a >> b;

	Integer* x = new Integer(a);
	Integer* y = new Integer(b);

	Integer* z = new Integer();
	*z = *x * *y;
	cout << "The product is " << z->toInt() << endl;
	delete z;
	delete y;
	delete x;
	m->waitkey();
}
void intDiv()
{
	Menu* m = Menu::Instance();
	int a, b;
	cout << "Enter two Integers  " << endl;
	cin >> a >> b;

	Integer* x = new Integer(a);
	Integer* y = new Integer(b);

	Integer* z = new Integer();
	*z = *x / *y;
	cout << "The quotient is " << z->toInt() << endl;
	delete z;
	delete y;
	delete x;
	m->waitkey();
}
void dblAdd()
{
	Menu* m = Menu::Instance();
	double a, b;
	cout << "Enter two doubles  " << endl;
	cin >> a >> b;

	Double* x = new Double(a);
	Double* y = new Double(b);

	Double* z = new Double();
	*z = *x + *y;
	cout << "The sum is " << z->toDouble() << endl;
	delete z;
	delete y;
	delete x;
	m->waitkey();
}
void dblSub()
{
	Menu* m = Menu::Instance();
	double a, b;
	cout << "Enter two doubles  " << endl;
	cin >> a >> b;

	Double* x = new Double(a);
	Double* y = new Double(b);

	Double* z = new Double();
	*z = *x - *y;
	cout << "The difference is " << z->toDouble() << endl;
	delete z;
	delete y;
	delete x;
	m->waitkey();
}
void dblMul()
{
	Menu* m = Menu::Instance();
	double a, b;
	cout << "Enter two doubles  " << endl;
	cin >> a >> b;

	Double* x = new Double(a);
	Double* y = new Double(b);

	Double* z = new Double();
	*z = *x * *y;
	cout << "The product is " << z->toDouble() << endl;
	delete z;
	delete y;
	delete x;
	m->waitkey();
}
void dblDiv()
{
	Menu* m = Menu::Instance();
	double a, b;
	cout << "Enter two doubles  " << endl;
	cin >> a >> b;

	Double* x = new Double(a);
	Double* y = new Double(b);

	Double* z = new Double();
	*z = *x / *y;
	cout << "The quotient is " << z->toDouble() << endl;
	delete z;
	delete y;
	delete x;
	m->waitkey();
}
void Exit()
{
	exit(0);
}

