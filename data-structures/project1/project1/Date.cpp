//
//  Date.cpp
//  Project1
//
//  Created by Clayton Castro on 9/25/21.
//

#include "Date.hpp"

Date::Date(string x){
    //adjust "date" strings that are not properly formatted
    if(x.at(1)=='/'){
        x.insert(0,"0");
    }
    if(x.at(4)=='/'){
        x.insert(3,"0");
    }

    //next the forward slashes are removed and each part of date is parsed into its repsective variable
    x.erase(remove(x.begin(), x.end(), '/'), x.end());
    month = stoi(x.substr(0,2));
    day = stoi(x.substr(2,2));
    year = stoi(x.substr(4,4));
}


int Date::getDay(){
    return day;
}

int Date::getYear(){
    return year;
}

int Date::getMonth(){
    return month;
}
