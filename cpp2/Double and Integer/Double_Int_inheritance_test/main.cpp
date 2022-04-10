// Clayton
// MSJC ID: 0558597
// Assignment 10 - Recursion
// testing new recursive method of handling non-number input
#include <iostream>
#include <fstream>
#include "Double.h"
#include "Integer.h"
#include "menu.h"

using namespace std;
using namespace Clayton;


int main(){

	Integer a, b(4), c;
	cout << "Enter an Integer\n";
	cin >> a;
	c = b + a;
	c.printInt();
	c = b * a;
	c.printInt();
	c = b.sub(a);
	c.printInt();
	c = a / b;
	c.printInt();

}