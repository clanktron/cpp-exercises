//
//  linkedList.cpp
//  gameScores-lab3
//
//  Created by Clayton Castro on 9/28/21.
//

#include "linkedList.hpp"


bool linkedList::empty() const { 
    return head==NULL;
}

const int& linkedList::front() const{
    return head->data;
}

void linkedList::addFront(const int& e) {
    node* tmp = new node;
    tmp->data = e;
    tmp->next = head;
    head = tmp;
    size++;
    setTail();
}

void linkedList::removeFront() {
    node* old = head;
    head = old->next;
    free(old);
    size--;
    if(!empty()) setTail();
}

void linkedList::removeBack() {
    if (head == NULL)
          return;
   
    if (head->next == NULL) {
        delete head;
        return;
    }
    node* second_last = head;
    while (second_last->next->next != NULL)
        second_last = second_last->next;
    
    delete (second_last->next);
    
    second_last->next = NULL;
    size--;
    setTail();
    return;
}

void linkedList::insert(node* prev_node, int new_data){
    if (prev_node == NULL)
    {
        return;
    }
    node* new_node = new node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    size++;
    if(!empty()) setTail();
}

void linkedList::insertAbove(node* next_node, int new_data){

    if (head == next_node) {
        node* tmp = new node;
        tmp->data = new_data;
        tmp->next = head;
        head = tmp;
    }
    
    else {
        node *p, *n = head;
        for (n, p; n != next_node;p = n, n = n->next);
        node* m = new node;
        m->data = new_data;
        m->next = p->next;
        p->next = m;
    }
    size++;
    setTail();
}

void linkedList::remove(node* head, node* obj){
    if(head == obj){
        if(head->next == NULL){
            return;
        }
   
        head->data = head->next->data;
        obj = head->next;
        head->next = head->next->next;
        delete obj;
        return;
    }
   
    node *prev = head;
    while(prev->next != NULL && prev->next != obj)
    prev = prev->next;

    if(prev->next == NULL){
        return;
    }
   
    prev->next = prev->next->next;
    size--;
    if(!empty()) setTail();
    return;
}

void linkedList::append(int new_data)
{
    node* newNode = new node();
      
    newNode->data = new_data;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    tail->next = newNode;
    size++;
    setTail();
    return;
}

void linkedList::print(){
    node* tmp = new node();
    tmp = head;
    while (tmp != NULL) {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void linkedList::setTail(){
    node* tmp = head;
    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    tail=tmp;
}
