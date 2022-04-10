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

	string a;

	cout << "Enter a string to be converted to an Integer class\n";
	getline(cin, a);
	Integer x(a);
	x.printInt();

	string b;
	cout << "Enter a string to be converted to an Double class\n";
	getline(cin, b);
	Double y(b);
	y.printDbl();
	return 0;
}