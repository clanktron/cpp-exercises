#include <iostream>
#include "calc.h"


using namespace std;

int main()
{
	int x, y;
	cout << "Enter 2 numbers." << endl;
	cin >> x >> y;
	Calc<int> a(x, y);
	int b = a.add();
	cout << "The sum is " << b << endl;
	int c = a.sub();
	cout << "The difference is " << c << endl;
	int d = a.mul();
	cout << "The product is " << d << endl;
	try {
		int e = a.div();
		cout << "The quotient is " << e << endl;
	}
	catch (calcException q)
	{
		cout << q.what() << endl;
	}
	
}

