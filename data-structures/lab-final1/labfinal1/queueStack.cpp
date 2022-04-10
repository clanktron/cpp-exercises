//
//  queueStack.cpp
//  labfinal1
//
//  Created by Clayton Castro on 12/13/21.
//
#include "queueStack.hpp"

void queueStack::push(int x){
    size++;
    b.enqueue(x);
    while (!a.empty()) {
        b.enqueue(a.front());
        a.dequeue();
    }
    LinkedQueue q = a;
    a = b;
    b = q;
}

void queueStack::pop(){
    if (a.empty()) {
        return;
    }
    a.dequeue();
    size--;
}

int queueStack::top(){
    if (a.empty()){
        return -1;
    }
    return a.front();
}
