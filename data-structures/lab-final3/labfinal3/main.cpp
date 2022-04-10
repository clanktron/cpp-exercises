//
//  main.cpp
//  labfinal3
//
//  Created by Clayton Castro on 12/13/21.
//

//  For this question, you will implement parts of a standard priority queue, called FinalPQ.  This priority queue will store integers, which will be used as keys.  The priority queue ADT will use an array of 10 elements.  Implement the functions min(), isEmpty(), and insert(e).  You can assume that the priority queue will not be full.   For 7 points extra credit, implement the functions size() and removeMin().

//  Following the assumption that the keys are also the data, rather than the typical key and data pair.
//  Priority is being based on smallest integer has highest priority.


#include <iostream>
#include "finalPQ.hpp"

int main(int argc, const char * argv[]) {
    
    finalPQ x;
    
    x.insert(10);
    x.insert(6);
    x.insert(7);
    x.insert(34);
    x.insert(1);
    cout << x.min() << endl;
    x.removeMin();
    cout << x.min() << endl;
    cout << "the size is: " << x.size() << endl;
    
    return 0;
}
