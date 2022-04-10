
#include<iostream>

#include<iterator>

#include<vector>

using namespace std;

int main()

{

//declaring and intializing a vector
vector<int> v = [1,3,5,7,9];

//declaring iterator to a vector

vector<int>::iterator itr;

//terating through out the vector and displaying vector elemnet\

for(itr=v.begin(); itr<v.end(); itr++)

cout<<*itr<<" ";
