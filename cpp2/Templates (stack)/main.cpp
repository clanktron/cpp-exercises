// Clayton
// MSJC ID: 0558597
// Assignment 14 - Templates
// testing of stack template class
#include <iostream>
#include <string>
#include "Stack.h"
#include "Menu.h"

void pushInt();
void popInt();
void peekInt();
void pushString();
void popString();
void peekString();
void exit();

Menu m;
Stack<int> stInt;
Stack<string> stString;


int main()
{
	m.addMenu("1. Push Int stack", pushInt);
	m.addMenu("2. Pop Int stack", popInt);
	m.addMenu("3. Peek Int stack", peekInt);
	m.addMenu("4. Push String stack", pushString);
	m.addMenu("5. Pop String stack", popString);
	m.addMenu("6. Peek String stack", peekString);
	m.addMenu("7. Exit", exit);
	m.runMenu();

}

void pushInt()
{
	int x;
	cout << "Enter an integer to push" << endl;
	cin >> x;
	stInt.push(x);
	m.waitkey();
}
void popInt()
{
	cout << "Here is your integer" << endl;
	cout << stInt.pop() << endl;
	m.waitkey();
}
void peekInt()
{
	cout << "Here is your integer" << endl;
	cout << stInt.peek() << endl;;
	m.waitkey();
}

void pushString()
{
	string x;
	cout << "Enter a string to push" << endl;
	cin >> x;
	stString.push(x);
	m.waitkey();
}
void popString()
{
	cout << "Here is your string" << endl;
	cout << stString.pop() << endl;
	m.waitkey();
}
void peekString()
{
	cout << "Here is your string" << endl;
	cout << stString.peek() << endl;
	m.waitkey();
}
void exit()
{
	cout << "Goodbye" << endl;
	exit(0);
}