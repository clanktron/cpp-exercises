#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
	Fraction f1, f2, f3, f4, f5;
	f1.setFraction(1, 2);
	f2.setFraction(3, 4);
	f3 = f1.add(f2);
	f3.printFraction();

	f4 = f1.multiply(f2);
	f4.printFraction();

	f5 = f1.divide(f2);
	f5.printFraction();

}