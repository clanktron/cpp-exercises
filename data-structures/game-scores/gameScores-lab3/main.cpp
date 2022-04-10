//
//  main.cpp
//  gameScores-lab3
//
//  Created by Clayton Castro on 9/28/21.
//

#include <iostream>
#include "gameScores.hpp"

int main(int argc, const char * argv[]) {
  
    gameScores example("Galaga");
    
    example.add(1234);
    example.add(4351);
    example.add(2341);
    example.add(21345);
    example.add(34);
    example.add(55);
    example.add(3);
    example.add(6700);
    example.add(876);
    example.add(5256);
    example.add(9000000);
    example.add(444);

    example.remove(2);
    
    
    example.print();

    
    return 0;
}
