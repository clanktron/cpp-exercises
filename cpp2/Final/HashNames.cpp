#include "HashNames.h"
#include <map>

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
	int hashVal = djbHash(s, this->tablesize);
	data.insert({ hashVal, s });
}
void HashNames::printnames(int hashVal)
{
	auto range = data.equal_range(hashVal);
	cout << hashVal << ":";
	for (auto i = range.first; i!=range.second;)
	{
		cout << i->second;
		i++;
		if (i != range.second) {
			cout << ", ";
		}
		else { cout << endl; }
	}
}