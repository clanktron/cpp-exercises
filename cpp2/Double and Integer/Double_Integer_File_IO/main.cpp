// Clayton
// MSJC ID: 0558597
// Assignment 9 - File IO
// writing to and from files with integer and double classes
#include <iostream>
#include <fstream>
#include "Double.h"
#include "Integer.h"
#include "menu.h"

using namespace std;
using namespace Clayton;

void writeNumbers(vector<Integer*> i);
void writeNumbers(vector<Double*> d);

int main(){

	vector<Integer*> iNumbers;
	vector<Double*> dNumbers;

	ifstream infile("Numbers.txt");
	if (!infile)
	{
		cout << "File open failed.";
		exit(1);
	}
	string input;
	while (getline(infile, input))
	{
		string::size_type pos = input.find(".", 0);
		if (pos != string::npos)
		{
			dNumbers.push_back(new Double(input));
		}
		else
		{
			iNumbers.push_back(new Integer(input));
		}
	}
	infile.close();

	writeNumbers(iNumbers);
	writeNumbers(dNumbers);

	return 0;
}


void writeNumbers(vector<Integer*> i)
{
	ofstream outfile("integer.txt");
	if (!outfile)
	{
		cout << "Unable to open the file for writing" << endl;
		exit(1);
	}

	for (int tmp = 0; tmp < i.size(); tmp++)
	{
		Integer* a = i[tmp];
		outfile << a->toString() << endl;
	}
	outfile.close();
}
void writeNumbers(vector<Double*> d)
{
	ofstream outfile("double.txt");
	if (!outfile)
	{
		cout << "Unable to open the file for writing" << endl;
		exit(1);
	}

	for (int tmp = 0; tmp < d.size(); tmp++)
	{
		Double* a = d[tmp];
		outfile << a->toString() << endl;
	}
	outfile.close();
}





