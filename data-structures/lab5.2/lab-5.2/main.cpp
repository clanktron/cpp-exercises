//
//  main.cpp
//  P-5.3
//
//  Created by Clayton Castro on 11/1/21.
//

#include <iostream>

using namespace std;

template <class T>
class Stack {
private:
    struct Node {
        T data;
        Node* next;
    };
    Node* head;
public:
    Stack() : head(nullptr){}
    Stack(Stack const& value);
    ~Stack();
    bool isEmpty();
    int size();
    const T& top();
    void push(const T& theData);
    void pop();
};

template <class T>
Stack<T>::Stack(Stack const& value) : head(nullptr) {
    for(Node* loop = value->data; loop != nullptr; loop = loop->next) {
        push(loop->data);
    }
}


template <class T>
Stack<T>::~Stack() {
    while(head != nullptr) {
        pop();
    }
}


template <class T>
bool Stack<T>::isEmpty() {
    if(head == nullptr) {
        return true;
    }
    else {
        return false;
    }
}

template <class T>
int Stack<T>::size() {
    int size = 0;
    Node* current = head;
    while(current != nullptr) {
        size++;
        current = current->next;
    }
    return size;
}

template <class T>
void Stack<T>::push(const T &theData) {
    Node* newNode = new Node;
    newNode->data = theData;
    newNode->next = nullptr;
    if(head != nullptr) {
        newNode->next = head;
    }
    head = newNode;
}

template <class T>
void Stack<T>::pop() {
    Node* temp;
    if(head == nullptr) {
        throw std::invalid_argument("Cannot pop from empty stack");
    }
    temp = head;
    head = head->next;
    delete temp;
}

template <class T>
const T& Stack<T>::top() {
    if(head == nullptr) {
        throw std::invalid_argument("Cannot show top of empty stack");
    }
    return head->data;
}

int main(){
    
    Stack<int> example;
    
    for(int i=1; i<=5; i++){
        example.push(i);
    }
    cout << example.top() << endl;
    example.pop();
    cout << example.top() << endl;
        
    
    
    
    
    return 0;
}
