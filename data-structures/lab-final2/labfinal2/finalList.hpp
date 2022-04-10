//
//  finalList.hpp
//  labfinal2
//
//  Created by Clayton Castro on 12/13/21.
//

#ifndef finalList_hpp
#define finalList_hpp

#include <iostream>
#include <string>

using namespace std;

class finalList{
private:
    struct node{
    string elem;                    // node element value
    node* prev;                // previous node in list
    node* next;
    };
    node* header;
    node* trailer;

public:
    finalList() : header(nullptr), trailer(nullptr) {}
    void insertFront(string x);
    void removeRear();
    int size();
    void print();
    
};


#endif /* finalList_hpp */
