//
//  main.cpp
//  P-5.6
//
//  Created by Clayton Castro on 11/1/21.
//

#include <iostream>

using namespace std;

template <class T>
class Queue{
private:
    struct Node {
        T data;
        Node* next;
    };
    Node* head;
public:
    Queue() : head(nullptr){}
    Queue(Queue const& value);
    ~Queue();
    bool isEmpty();
    int size();
    const T& front();
    void enqueue(const T& theData);
    void dequeue();
};

template <class T>
Queue<T>::Queue(Queue const& value) : head(nullptr) {
    for(Node* loop = value->data; loop != nullptr; loop = loop->next) {
        enqueue(loop->data);
    }
}


template <class T>
Queue<T>::~Queue() {
    while(head != nullptr) {
        dequeue();
    }
}


template <class T>
bool Queue<T>::isEmpty() {
    if(head == nullptr) {
        return true;
    }
    else {
        return false;
    }
}

template <class T>
int Queue<T>::size() {
    int size = 0;
    Node* current = head;
    while(current != nullptr) {
        size++;
        current = current->next;
    }
    return size;
}

template <class T>
void Queue<T>::enqueue(const T &theData) {
    Node* newNode = new Node;
    newNode->data = theData;
    newNode->next = nullptr;
    if(head == nullptr) {
        head = newNode;
    }
    else{
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

template <class T>
void Queue<T>::dequeue() {
    Node* temp;
    if(head == nullptr) {
        throw std::invalid_argument("Cannot dequeue from empty Queue");
    }
    temp = head;
    head = head->next;
    delete temp;
}

template <class T>
const T& Queue<T>::front() {
    if(head == nullptr) {
        throw std::invalid_argument("Cannot show front of empty Queue");
    }
    return head->data;
}

int main(){
    
    Queue<int> example;
    
    for(int i=3; i<=7; i++){
        example.enqueue(i);
    }
    cout << example.front() << endl;
    example.dequeue();
    cout << example.front() << endl;
    example.dequeue();
    cout << example.front() << endl;
    example.dequeue();
    cout << example.front() << endl;
    example.dequeue();
    cout << example.front() << endl;
        
    
    
    return 0;
}
