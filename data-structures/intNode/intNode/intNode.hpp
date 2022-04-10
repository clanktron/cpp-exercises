//
//  intNode.hpp
//  Ch 3
//
//  Created by Clayton Castro on 9/15/21.
//

#ifndef intNode_hpp
#define intNode_hpp

#include <stdio.h>


class intNode{
private:
    int elem;
    intNode* next;
    
    friend class intLinkedlist;
}

class intLinkedlist{
public:
    intLinkedlist();
    ~intLinkedlist();
    bool empty() const;
    int front() const;
    void addFront(int e);
    void removeFront();
    
private:
    intNode* head;
}

#endif /* intNode_hpp */
