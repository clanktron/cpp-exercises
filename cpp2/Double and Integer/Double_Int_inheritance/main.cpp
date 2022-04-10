// Clayton
// MSJC ID: 0558597
// Assignment 11 - Inheritance
// testing inheritance integration
#include <iostream>
#include <fstream>
#include "Double.h"
#include "Integer.h"
#include "menu.h"

using namespace std;
using namespace Clayton;


int main(){

	string a;
	cout << "Enter an Integer\n";
	getline(cin, a);
	Integer x(a), y(2), z;
	z = x + y;
	z.printInt();
	z = x - y;
	z.printInt();
	z = y.mul(x);
	z.printInt();
	z = x.div(y);
	z.printInt();


	string b;
	cout << "Enter a Double\n";
	getline(cin, b);
	Double d(b), f(2.5), g;
	g = d + f;
	g.printDbl();
	g = d - f;
	g.printDbl();
	g = d.mul(f);
	g.printDbl();
	g = d.div(f);
	g.printDbl();
	return 0;
}