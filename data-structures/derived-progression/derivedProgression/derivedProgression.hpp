//
//  derivedProgression.hpp
//  derivedProgression
//
//  Created by Clayton Castro on 9/15/21.
//

#ifndef derivedProgression_hpp
#define derivedProgression_hpp

#include "Progression.hpp"
#include <stdio.h>

class derivedProgression: public Progression{
public:
    derivedProgression(): Progression(2), prev(200), second(200) {}
    derivedProgression(long one, long two): Progression(one), prev(two), second(two){}
    
protected:
    long firstValue(); // reset to the first value
    long nextValue(); //step to the next value
    
private:
    long prev;
    long second;
    int testCase=0;
};


#endif /* derivedProgression_hpp */
