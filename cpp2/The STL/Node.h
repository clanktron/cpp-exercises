// Clayton
// MSJC ID: 0558597
// Assignment 15 - Using the STL
// Node template class
#pragma once
#include <iostream>
#include <string>
#include <set>

using namespace std;

template <class T>
class Node
{
private:
	T Data;
	int pri;
public:
	Node(T s, int i) : Data(s), pri(i) {}
	bool operator < (const Node& n) const { return pri > n.pri; }

	T getData() { return this->Data; }
	int getId() { return this->pri; }
};

