// Clayton
// MSJC ID: 0558597
// declaration of hashnames class
#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class HashNames
{
private:
	int djbHash(string data, int tablesize);
	vector <string> data[53];
public:
	//Constructors
	HashNames(string filename);

	void hash(string s);
	void printnames(int hashVal);

};
