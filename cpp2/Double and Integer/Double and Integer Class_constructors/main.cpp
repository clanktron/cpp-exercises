// Clayton
// MSJC ID: 0558597
// Assignment 3 - Overloaded Constructors
// testing of double and integer classes
#include <iostream>
#include "Double.h"
#include "Integer.h"

using namespace std;

int main() {

	int x = 10;
	Integer g(1), h, i, j(11), k(g), l, m, n, o;

	cout << "The following values are Integer class tests\n";

	cout << "this is 'i' (a test of the default constructor)\n";
	i.printInt();

	cout << "this is 'k' (a test of the constructor which takes its own class)\n" << "(also tests the constructor that takes primitive int)\n";
	k.printInt();

	cout << "this is 'l' (a test of the overloaded add function)\n";
	l = i.add(x);
	l.printInt();

	cout << "this is 'h' (a test of the overloaded sub function)\n";
	h = j.sub(5);
	h.printInt();

	cout << "this is 'm' (a test of the overloaded div function)\n";
	m = j.div(3);
	m.printInt();

	cout << "this is 'o' (a test of the overloaded mul function)\n";
	o = j.mul(7);
	o.printInt();



	Double a(5.1), b, c(a), d, e, f, y(int (3)), z;
	cout << "The following values are now Double class tests\n";

	cout << "this is 'a' (a test of the constructor that takes primitive double)\n";
	a.printDouble();

	cout << "this is 'b' (a test of the default constructor)\n";
	b.printDouble();

	cout << "this is 'c' (a test of the constructor that takes its own Double class)\n";
	c.printDouble();

	cout << "this is 'y' (a test of the constructor that takes primitive int)\n";
	y.printDouble();

	cout << "this is 'd' (a test of the overloaded add function)\n";
	d = a.add(3.7);
	d.printDouble();
	
	cout << "this is 'e' (a test of the overloaded div function)\n";
	e = a.div(4.5);
	e.printDouble();

	cout << "this is 'f' (a test of the overloaded mul function)\n";
	f = c.mul(1.2);
	f.printDouble();

	cout << "this is 'z' (a test of the overloaded sub function)\n";
	z = a.sub(3.4);
	z.printDouble();




}