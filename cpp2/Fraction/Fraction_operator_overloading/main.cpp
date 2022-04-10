#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
	Fraction f1(1, 2), f2(3, 4), f3, f4, f5, f6, f7;

	f3 = f1 + f2;
	f3.printFraction();

	f4 = f1 - f2;
	f4.printFraction();

	f5 = f1 * f2;
	f5.printFraction();
	
	f6 = f1 / f2;
	f6.printFraction();

	f7 = f1;
	f7.printFraction();


	return 0;
}