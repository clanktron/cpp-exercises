//
//  main.cpp
//  makes-change
//
//  Created by Clayton Castro on 9/12/21.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void printChange(string bill, double value, double& remainder);

int main(int argc, const char * argv[]) {

    double charged, paid, remainder;

begin:
    cout << "Enter the amount charged\n";
    cin >> charged;
    cout << "Enter the amount paid\n";
    cin >> paid;
    
    if(paid<charged){
        cout << "Insufficient payment.\n" << endl;
        goto begin;
    }
    
    remainder = paid - charged;
    
    cout << "Your change is:\n";
    
    printChange("hundred", 100, remainder);
    printChange("twenty", 20, remainder);
    printChange("ten", 10, remainder);
    printChange("five", 5, remainder);
    printChange("two", 2, remainder);
    printChange("one", 1, remainder);
    printChange("quarter", .25, remainder);
    printChange("dime", .1, remainder);
    printChange("nickel", .05, remainder);
    remainder=round(remainder*100)/100;
    printChange("penny", .01, remainder);

    return 0;
}

void printChange(string bill, double value, double& change){
    int amount(0);
    while (change>=value){
        change=change-value;
        amount++;
    }
    if(amount==0) {
        return;
    }
    else if(amount==1){
        cout << amount << " " << bill << endl;
        return;
    }
    else {
        cout << amount << " " << bill << "s\n";
        return;
    }
}
