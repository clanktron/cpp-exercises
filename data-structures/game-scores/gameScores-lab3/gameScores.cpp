//
//  gameScores.cpp
//  gameScores-lab3
//
//  Created by Clayton Castro on 9/28/21.
//

#include "gameScores.hpp"

void gameScores::add(int score) {
    if(this->head==NULL){
        addFront(score);
        return;
    }
    else{
        node *tmp = new node();
        tmp = head;
        while (tmp != NULL){
            if(tmp->data<score){
                insertAbove(tmp, score);
                resize();
                return;
            }
            else if(tmp->next==NULL && size<10){
                append(score);
                return;
            }
            tmp = tmp->next;
        }
    }

}

void gameScores::remove(int rank){
    node *tmp = new node();
    tmp = head;
  
    for (int i=1; i<rank; i++) {
        tmp = tmp->next;
    }
    
    linkedList::remove(this->head, tmp);
    
}

void gameScores::print(){
    cout << name << endl;
    linkedList::print();
}

void gameScores::resize(){
    while(size>MAXSIZE){
        removeBack();
    }
}
