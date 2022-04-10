//
//  queueStack.hpp
//  labfinal1
//
//  Created by Clayton Castro on 12/13/21.
//

#ifndef queueStack_hpp
#define queueStack_hpp

#include <stdio.h>
#include "LinkedQueue.h"

class queueStack{

private:
    LinkedQueue a, b;
    int size;
    
public:
    queueStack() : size(0) {}
    void push(int x);
    void pop();
    int top();
    
    
};


#endif /* queueStack_hpp */
