//
//  Progression.hpp
//  derivedProgression
//
//  Created by Clayton Castro on 9/15/21.
//

#ifndef Progression_hpp
#define Progression_hpp

#include <stdio.h>

class Progression{
public:
    Progression(long f = 0) : first(f), cur(f) { }
    virtual ~Progression() {};  // destructor
    void printProgression(int n); // print the first n values
protected:
    virtual long firstValue(); // reset to the first value
    virtual long nextValue(); //step to the next value
protected:
    long first; // first value
    long cur;  // current value
    
};


#endif /* Progression_hpp */
