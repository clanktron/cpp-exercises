//
//  main.cpp
//  Ch 3
//
//  Created by Clayton Castro on 9/15/21.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {

    vector<int> x;
    
    for(int i=0; i<11; i++){
        x.push_back(rand());
    }
    
    
    
    
    
    for(int i=0; i<x.size(); i++){
        cout << x[i] << endl;
    }
    return 0;
}

