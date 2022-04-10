//
//  scoreEntry.hpp
//  Project1
//
//  Created by Clayton Castro on 9/25/21.
//

#ifndef scoreEntry_hpp
#define scoreEntry_hpp

#include "Date.hpp"
#include <stdio.h>
#include <string>

using namespace std;

//score entry class used to group data for each high score
class scoreEntry{
private:
    string initials;
    int score;
    Date scoreDate;

public:
    //constructors
    scoreEntry() : initials(NULL), score(NULL), scoreDate() {}
    scoreEntry(string x, int y, string z);
    
    //used to set individual pieces of data of the entry
    void setInitials(string name);
    void setScore(int points);
    void setDate(string date);

    //getters for other misc. use
    string getInitials();
    int getScore();
    string getDate();
    
};

#endif /* scoreEntry_hpp */
