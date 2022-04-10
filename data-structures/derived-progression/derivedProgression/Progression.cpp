//
//  Progression.cpp
//  derivedProgression
//
//  Created by Clayton Castro on 9/15/21.
//

#include "Progression.hpp"
#include <iostream>

using namespace std;

void Progression::printProgression(int n) // print the first n values
{
    cout << firstValue();
    for (int i = 2; i<=n; i++){
    cout << ' ' << nextValue();
    }
    cout << endl;
}

long Progression::firstValue()
{
    cur = first;
    return cur;
}

long Progression::nextValue()
{
    return ++cur;
}
