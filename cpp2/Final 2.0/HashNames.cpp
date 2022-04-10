// Clayton
// MSJC ID: 0558597
// func definitions of hashnames class
#include "HashNames.h"

using namespace std;

HashNames::HashNames(string filename) 
{
	ifstream infile(filename);
	if (!infile) {
		cout << "Error opening file for reading" << endl;
		exit(-1);
	}
	string input;
	while (getline(infile,input)) {
		hash(input);
	}
	infile.close();
}

int HashNames::djbHash(string data, int tablesize)
{
	int hashVal = 5381;
	for (int i = 0; i < data.length(); i++)
	{
		hashVal *= 33;
		hashVal += static_cast<int>(data[i]);
	}

	hashVal %= tablesize;
	return abs(hashVal);
}
void HashNames::hash(string s)
{
	int hashVal = djbHash(s, 53);
	data[hashVal].push_back(s);
}
void HashNames::printnames(int hashVal)
{
	cout << hashVal << ":";
	if (!data[hashVal].empty())
	{
		for (auto i = data[hashVal].begin(); i != data[hashVal].end();)
		{
			cout << *i;
			i++;
			if (i != data[hashVal].end()) {
				cout << ", ";
			}
			else { cout << endl; }
		}
	}
}