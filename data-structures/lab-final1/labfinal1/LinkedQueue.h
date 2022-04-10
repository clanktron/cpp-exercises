// #include "CircleList.h"
#include "DLinkedList.h"

typedef int Elem;				// queue element type
class LinkedQueue {				// queue as doubly linked list
public:
    LinkedQueue();				// constructor
    int size() const;				// number of items in the queue
    bool empty() const;				// is the queue empty?
    const Elem& front(); // the front element
    void enqueue(const Elem& e);		// enqueue element at rear
    void dequeue();		// dequeue element at front
private:					// member data
    // CircleList C;				// circular list of elements
    DLinkedList D;
    int n;					// number of elements
};
