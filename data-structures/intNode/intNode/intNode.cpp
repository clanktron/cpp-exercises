//
//  intNode.cpp
//  Ch 3
//
//  Created by Clayton Castro on 9/15/21.
//

#include "intNode.hpp"

intLinkedlist::intLinkedlist(): head(NULL){};

intLinkedlist::~intLinkedlist(){
    while(!empty()){
        removeFront();
    }
}

