//
//  gameEntry.cpp
//  Project1
//
//  Created by Clayton Castro on 9/25/21.
//
#include "gameEntry.hpp"


void gameEntry::add(scoreEntry entry){
    //reset iterator
    it = topTen.begin();
    //check if any entries exist, if not just add entry
    if(topTen.size()==0){
        topTen.insert(it, entry);
        return;
    }
    
    //compare new entry to current entries for proper insertion (keeping highest to lowest)
    for(int i=0; i<10; i++){
        if(entry.getScore()>=topTen[i].getScore()){
            topTen.insert(it, entry);
            while(topTen.size()>10){
                topTen.erase(topTen.end()-1);
            }
            return;
        }
        else if(i==topTen.size()&&i<10){
            topTen.push_back(entry);
            return;
        }
        it++;
    }
}

//remove entry at given rank
void gameEntry::remove(int rank){
    //check for valid rank
    if(rank<=0 || rank>topTen.size()){
        return;
    }
    it = topTen.begin()+(rank-1);
    topTen.erase(it);
}

void gameEntry::remove(string date){
    //use string date to set Date class for boundary checking
    Date boundary(date);
    it = topTen.begin();
    
    //compare each date with boundary and remove if necessary
    for(int i=0; i<topTen.size(); i++){
        Date tmp(topTen[i].getDate());
       
        if(tmp.getYear()<boundary.getYear()){
            topTen.erase(it);
           it--;
           i--;
       }
       else if(tmp.getYear()==boundary.getYear() && tmp.getMonth()<boundary.getMonth()){
           topTen.erase(it);
           it--;
           i--;
       }
       else if(tmp.getYear()==boundary.getYear() && tmp.getMonth()==boundary.getMonth() && tmp.getDay()<boundary.getDay()){
           topTen.erase(it);
           it--;
           i--;
       }
        it++;
     }
    
}

//print name of game with scores in order
void gameEntry::print(){
    cout << "Game: " << gameName << endl;
    int tmp=1;
    for(int i=0; i<topTen.size(); i++){
        cout << tmp << " " << topTen[i].getInitials() << " " << topTen[i].getScore() << " " << topTen[i].getDate() << endl;
        tmp++;
    }
    cout << endl;
}



