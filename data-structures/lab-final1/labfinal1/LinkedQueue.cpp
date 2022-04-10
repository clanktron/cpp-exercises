#include"LinkedQueue.h"

LinkedQueue::LinkedQueue()			// constructor
//    : C(), n(0) { }
 : D(), n(0) {}

int LinkedQueue::size() const			// number of items in the queue
{
    return n;
}

bool LinkedQueue::empty() const		// is the queue empty?
{
    return (n == 0);
}

// get the front element
const Elem& LinkedQueue::front(){
      return D.front();
}

// enqueue element at rear
void LinkedQueue::enqueue(const Elem& e) {
//    C.add(e);					// insert after cursor
//    C.advance();				// ...and advance
    D.addBack(e);
    n++;
}

// dequeue element at front
void LinkedQueue::dequeue(){
    D.removeFront();
    n--;
}
