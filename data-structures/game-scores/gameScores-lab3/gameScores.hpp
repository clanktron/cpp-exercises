//
//  gameScores.hpp
//  gameScores-lab3
//
//  Created by Clayton Castro on 9/28/21.
//

#ifndef gameScores_hpp
#define gameScores_hpp

#include "linkedList.hpp"
#include <stdio.h>

class gameScores : public linkedList {
private:
    string name;
    int MAXSIZE = 10;

public:
    gameScores(string s) : name(s) {}
    void add(int score);
    void remove(int rank);
    void print();
    void resize();

};


#endif /* gameScores_hpp */
