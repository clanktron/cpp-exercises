//testing of random class (main)
#include <iostream>
#include "Random.h"
#include "Double.h"
#include "Integer.h"

using namespace std;
using namespace Clayton;

int main()
{
	double x, y;
	cout << "Please enter minimum and maximum values for the random number generator\n";
	cin >> x;
	cin >> y;

	Random *example = new Random(x, y);

	cout << "The first value as a primitive int is " << example->nextInt() << endl;
	cout << "The next value as an Integer class is ";
	Integer i = example->nextInteger();
	i.printInt();
	cout << "The next value as a primitive double is " << example->nextDbl() << endl;
	cout << "The next value as a Double class is ";
	Double d = example->nextDouble();
	d.printDbl();

	delete example;

	return 0;
}