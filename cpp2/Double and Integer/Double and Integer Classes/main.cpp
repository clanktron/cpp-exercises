// Clayton
// MSJC ID: 0558597
// Assignment 2 - Class Construction
// testing of double and integer classes
#include <iostream>
#include "Double.h"
#include "Integer.h"

using namespace std;

int main() {

	double x;
	Double a, b, c, d, e, f;

	a.equals(5.5);
	b.equals(2.25);

	c = a.add(b);
	c.printDouble();

	d = a.sub(b);
	d.printDouble();

	e = a.mul(b);
	e.printDouble();

	f = a.div(b);
	f.printDouble();

	x = a.toDouble();
	cout << x << endl;


	int y;
	Integer g, h, i, j, k, l;
	g.equals(5);
	h.equals(4);

	i = g.add(h);
	i.printInt();

	j = g.sub(h);
	j.printInt();

	k = g.mul(h);
	k.printInt();

	l = g.div(h);
	l.printInt();

	y = g.toInt();
	cout << y << endl;

}