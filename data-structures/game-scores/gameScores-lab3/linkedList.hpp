//
//  linkedList.hpp
//  gameScores-lab3
//
//  Created by Clayton Castro on 9/28/21.
//

#ifndef linkedList_hpp
#define linkedList_hpp

#include <iostream>
#include <stdio.h>

using namespace std;

class node{
private:
    int data;
    node* next;
    
    friend class linkedList;
    friend class gameScores;
};

class linkedList {
private:
    node *head, *tail;
    int size;
    
public:
    linkedList() : head(NULL), size(0) {};
    ~linkedList() { while(!empty()) removeFront(); };
    void setTail();
    bool empty() const;
    const int& front() const;
    void addFront(const int& e);
    void removeFront();
    void removeBack();
    void insert(node* prev_node, int new_data);
    void insertAbove(node* next_node, int new_data);
    void append(int new_data);
    void remove(node* head, node* obj);
    void print();
    
    friend class gameScores;
};

#endif /* linkedList_hpp */
