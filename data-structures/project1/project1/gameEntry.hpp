//
//  gameEntry.hpp
//  Project1
//
//  Created by Clayton Castro on 9/25/21.
//

#ifndef gameEntry_hpp
#define gameEntry_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include "scoreEntry.hpp"

using namespace std;

//gameEntry class for storing the high scores of the game
class gameEntry{
private:
    //I used a vector of scoreEntries for each game; might have been better to use either an array or doubly linked list but this approach seemed to work just as well
    vector<scoreEntry> topTen;
    //iterator used to navigate and alter vector
    vector<scoreEntry>::iterator it;
    //name of game
    string gameName;
    
public:
    //constructor for initializing game name
    gameEntry(string s) : gameName(s), topTen() {}    

    void add(scoreEntry entry);
    void remove(int rank);
    //remove all entries before given date
    void remove(string date);
    void print();
        
};


#endif /* gameEntry_hpp */
