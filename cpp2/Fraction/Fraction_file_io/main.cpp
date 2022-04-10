#include <iostream>
#include <fstream>
#include "Fraction.h"

using namespace std;

void writeFractions(int amount);
void readFractions();

int main()
{
	writeFractions(10);
	readFractions();
	return 0;
}


void writeFractions(int amount) 
{
	ofstream outfile("Fractions.txt");
	if(!outfile)
	{
		cout << "Unable to open the file for writing" << endl;
		exit(1);
	}

	for(int i=0; i<amount; i++)
	{
		Fraction* f = new Fraction(rand() % 100, rand() % 100);
		outfile << f->getFraction() << endl;
		delete f;
	}
	outfile.close();
}

void readFractions()
{
	ifstream infile("Fractions.txt");
	char input[100];
	while(infile >> input)
	{
		cout << input << endl;
	}
	infile.close();
}