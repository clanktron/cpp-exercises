// Clayton
// MSJC ID: 0558597
// Assignment 15 - Using the STL
// testing of priQue class (main)
#include <iostream>
#include "priQue.cpp"
using namespace std;

int main()
{
	priQue<string> que;
	que.enqueue("C++ ", 9);
	que.enqueue("Is ", 7);
	que.enqueue("Indeed ", 2);
	que.enqueue("Very", 15);
	que.enqueue("Fun", 14);

	cout << "The first item in the queue is " << que.peek() << endl;

	cout << "There are " << que.size() << " items queued." << endl;

	for (int i = 0; i != que.size();) {
		cout << que.dequeue() << " ";
	}
	cout << endl;

	cout << "There are " << que.size() << " items queued." << endl;

	priQue<int> nums;
	nums.enqueue(3, 9);
	nums.enqueue(2, 7);
	nums.enqueue(4, 2);


	cout << "There are " << nums.size() << " items queued." << endl;

	for (int i = 0; i != nums.size();) {
		cout << nums.dequeue() << " ";
	}
	cout << endl;

	cout << "There are " << nums.size() << " items queued." << endl;

	return 0;
}