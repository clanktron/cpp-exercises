#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <fstream>

using namespace std;

class HashNames
{
private:
	int djbHash(string data, int tablesize);
	multimap<int, string> data;
	int tablesize = 53;
public:
	//Constructors
	HashNames(string filename);

	void hash(string s);
	void printnames(int hashVal);

};
