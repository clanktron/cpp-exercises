//
//  stack.hpp
//  project-2
//
//  Created by Clayton Castro on 11/10/21.
//

#ifndef stack_hpp
#define stack_hpp

#include <stdio.h>
template <typename E>
class stack {
    enum { DEF_CAPACITY = 100 };
private:
    E* data;
    int capacity;
    int index;

public:
    // default stack capacity
    stack(int cap = DEF_CAPACITY);
    int size() const;
    bool empty() const;
    const E& top();
    void push(const E& e);
    void pop();
    };

template <typename E> stack<E>::stack(int cap)
: data(new E[cap]), capacity(cap), index(-1) { }

template <typename E> int stack<E>::size() const{
    return (index + 1);
}

template <typename E> bool stack<E>::empty() const{
    return (index < 0);
}

template <typename E> const E& stack<E>::top(){
  //  if (empty()) throw StackEmpty("Topofemptystack");
    return data[index];
}

template <typename E> void stack<E>::push(const E& e){
   // if (size() == capacity) throw StackFull("Pushtofullstack");
    data[++index] = e;
}

template <typename E> void stack<E>::pop(){
   // if (empty()) throw StackEmpty("Popfromemptystack");
    --index;
}

#endif /* stack_hpp */
