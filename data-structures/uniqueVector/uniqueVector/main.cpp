//
//  main.cpp
//  test
//
//  Created by Clayton Castro on 8/25/21.
//

#include <iostream>
#include <vector>
using namespace std;

bool uniqueVector(vector<int> vect);

int main(int argc, const char * argv[]) {
    
    vector<int> VECTOR;
    int nums;
    
    cout << "How many numbers do you want to compare?\n";
    cin >> nums;
    
    while(nums!=0){
        int tmp;
        cout << "Enter a number\n";
        cin >> tmp;
        VECTOR.push_back(tmp);
        nums--;
    }
    
    
    if(uniqueVector(VECTOR)==true){
        cout << "All integers in the vector are unique\n";
    }
    else cout << "There is at least one duplicate integer in the vector.\n";
    
    
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
