//
//  scoreEntry.cpp
//  Project1
//
//  Created by Clayton Castro on 9/25/21.
//

#include "scoreEntry.hpp"
//constructor for all supplied data
scoreEntry::scoreEntry(string x, int y, string z){
    setScore(y);
    //if the score is invalid cancel the assignment
    if(score==NULL){
        return;
    }
    setInitials(x);
    setDate(z);
}


void scoreEntry::setInitials(string name){
    //limit name size to first 3 characters
    name.resize(3);
    initials = name;
}

void scoreEntry::setScore(int points){
    //check if score is valid before assignment
    if(points>10000){
        score = NULL;
        return;
    }
    else if(points<=0){
        score=0;
    }
    else score=points;
        
}

void scoreEntry::setDate(string date){
    scoreDate = Date(date);
}

int scoreEntry::getScore(){
    return this->score;
}

string scoreEntry::getInitials(){
    return this->initials;
}

string scoreEntry::getDate(){
    //re-insert forward slashes for human comprehensibility
    string tmp = to_string(scoreDate.getMonth()) + "/" + to_string(scoreDate.getDay()) + "/" + to_string(scoreDate.getYear());
    return tmp;
}
