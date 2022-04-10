#include <iostream>
// Clayton
// MSJC ID: 0558597
// Assignment 15 - Using the STL
// PriQue template class function definitions
#include <set>
#include <string>
#include "priQue.h"

using namespace std;

template<class T>
void priQue<T>::enqueue(T data, int p)
{
	if (p < 1 || p>10) {
		p = 5;
	}
	Node<T> tmp(data, p);
	this->insert(tmp);
}
template<class T>
T priQue<T>::dequeue()
{
	Node<T> tmp = *this->begin();
	this->erase(this->begin());
	return tmp.getData();
}
template<class T>
T priQue<T>::peek()
{
	Node<T> tmp = *this->begin();
	return tmp.getData();
}
