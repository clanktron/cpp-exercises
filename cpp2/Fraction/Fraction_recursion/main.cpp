#include <iostream>
#include <fstream>
#include <string>

#include "Fraction.h"

using namespace std;

int asciiSum(string str, int index);


int main()
{
	string a;

	cout << "Enter a string to be converted to sum of its characters ASCII values\n";
	getline(cin, a);
	cout << "The total ASCII value is " << asciiSum(a, 0);



	cout << endl << endl << "NEW FRACTION FUNC DEMO\n";
	Fraction f1(2,3), f2(3,5), f3;
	f3 = f1 * f2;
	f3.printFraction();
	f3.reduce();
	cout << "can be reduced to ";
	f3.printFraction();

	return 0;
}


int asciiSum(string str, int index)
{
	int sum = 0;
	if (index == str.length())
		return(sum);
	else if ((str[index] >= 0) && (str[index] <= 9))
		sum += '0' + str[index];
	else
	{
		sum += int(str[index]);
	}
	sum += asciiSum(str,index+1);
	return(sum);
}