//
//  main.cpp
//  derivedProgression
//
//  Created by Clayton Castro on 9/15/21.
//
#include "derivedProgression.hpp"
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    derivedProgression *example = new derivedProgression(60,15);

    example->printProgression(5);
    
    delete example;
    
    derivedProgression *example1 = new derivedProgression();

    example1->printProgression(5);
    
    delete example1;

    //assuming that second value was not to be printed as the printProgression function was not virtual (aka not meant to be modified)
    
    
    return 0;
}
