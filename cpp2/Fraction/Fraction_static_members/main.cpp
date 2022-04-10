#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
	Fraction *f1 = new Fraction(1,2);

	f1->printcount();

	delete f1;

	f1->printcount();

	return 0;
}