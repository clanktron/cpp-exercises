// Clayton
// MSJC ID: 0558597
// Assignment 15 - Using the STL
// priQue template class declaration
#pragma once
#include <iostream>
#include <set>
#include <string>
#include "Node.h"

using namespace std;

template <class T>
class priQue : public multiset<Node<T>>
{
public:
	void enqueue(T data, int p);
	T dequeue();
	T peek();
};
