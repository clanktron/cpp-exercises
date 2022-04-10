//
//  main.cpp
//  birthdayMatch
//
//  Created by Clayton Castro on 8/25/21.
//

#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

bool uniqueVector(vector<int> vect);
int birthdayMatches(int sampleSize);


int main(int argc, const char * argv[]) {

    srand(static_cast<unsigned int>(time(NULL)));
    
    cout << "\"a\" is the sample size for conducted experiments.\n";
    cout << "\"b\" is the number of experiments out of 10 that contained at least two matching birthdays.\n" << endl;
    
    for(int a(5);a<=100;a=a+5){
        
        cout << "a: " << a << endl;
        cout << "b: " << birthdayMatches(a) << endl << endl;
        
    }

    return 0;
}

bool uniqueVector(vector<int> vect){
    for (int i(0);i<vect.size();i++){
        int tmp = vect[i];
        for(int a(i+1);a<vect.size();a++){
            if(tmp==vect[a]) return false;
        }
    }
    return true;
}

int birthdayMatches(int sampleSize){
    int matches(0);
    for(int b(0); b<10;b++){
        vector<int> tmp;
        for(int c(0);c<sampleSize;c++){
            tmp.push_back(rand() % 365);
        }
        if(uniqueVector(tmp)==false) matches++;
    }
    return matches;
}
