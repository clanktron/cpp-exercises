//
//  finalList.cpp
//  labfinal2
//
//  Created by Clayton Castro on 12/13/21.
//

#include "finalList.hpp"

void finalList::insertFront(string a){
    node *tmp = new node;
    tmp->elem = a;
    tmp->next = NULL;
    if(header == NULL)
    {
        header = tmp;
        trailer = tmp;
    }
    else
    {
        tmp ->next = header;
        header = tmp;
    }
}


void finalList::print(){
    node *n;
    n = header;
    while(n!=NULL)
    {
        cout << n->elem << "  ";
        n = n->next;
    }
    cout << endl;
}

int finalList::size(){
    node *n;
    n = header;
    int a=0;
    while(n!=NULL)
    {
        n=n->next;
        a+=1;
    }
    return a;
}

void finalList::removeRear(){
    node *n=header;
    
    while(n->next->next!=NULL)
    {
        n = n->next;
    }
    n->next = NULL;
}

