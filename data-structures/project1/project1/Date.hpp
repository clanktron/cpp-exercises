//
//  Date.hpp
//  Project1
//
//  Created by Clayton Castro on 9/25/21.
//

#ifndef Date_hpp
#define Date_hpp

#include <string>
#include <stdio.h>

using namespace std;

//base "Date" class
//used to be able to access components of the date more easily
class Date{
private:
    int month;
    int day;
    int year;

public:
    //constructors
    Date() : month(NULL), day(NULL), year(NULL) {}
    Date(string x);
    
    //getters
    int getMonth();
    int getDay();
    int getYear();
    
};

#endif /* Date_hpp */
