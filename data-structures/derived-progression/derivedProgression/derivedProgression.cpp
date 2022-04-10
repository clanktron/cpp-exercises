//
//  derivedProgression.cpp
//  derivedProgression
//
//  Created by Clayton Castro on 9/15/21.
//

#include "derivedProgression.hpp"
#include <iostream>
#include <cmath>

using namespace std;


long derivedProgression::firstValue()
{
    cur = first;
    prev = second;
    testCase = 0;
    return cur;
}

long derivedProgression::nextValue()
{
    long tmp;
    if(testCase==0){
        tmp = cur;
        cur = prev;
        prev = tmp;
        testCase++;
    }
    else{
        tmp = abs(cur - prev);
        prev = cur;
        cur = tmp;
    }
    return cur;
}
