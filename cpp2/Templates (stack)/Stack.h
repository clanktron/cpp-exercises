// Clayton
// MSJC ID: 0558597
// Assignment 14 - Templates
// Stack template declaration
#pragma once
#include <iostream>
#include <vector>

using namespace std;

template <class T>
class Stack : public vector<T>
{
public:
	void push(T x);
	T pop();
	T peek();
};
template <class T>
void Stack<T>::push(T x)
{
	return this->push_back(x);
}
template <class T>
T Stack<T>::pop()
{
	T tmp = this->back();
	this->pop_back();
	return tmp;
}
template <class T>
T Stack<T>::peek()
{
	return this->back();
}
