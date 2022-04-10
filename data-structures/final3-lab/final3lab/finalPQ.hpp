//
//  finalPQ.hpp
//  labfinal3
//
//  Created by Clayton Castro on 12/13/21.
//

#ifndef finalPQ_hpp
#define finalPQ_hpp

#include <iostream>
#include <algorithm>

using namespace std;

class finalPQ{
private:
    int data[10];
    int front, rear, count;
    
public:
    finalPQ() : front(0), rear(0), count(0) {}
    int min();
    bool isEmpty();
    void insert(int x);
    void removeMin();
    int size();
    
    //housekeeping
    void sort();
    
};

#endif /* finalPQ_hpp */
