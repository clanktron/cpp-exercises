//
//  main.cpp
//  labfinal1
//
//  Created by Clayton Castro on 12/13/21.
//

//  Assume that you have two queues of integers. These queues will be used to perform stack operations push(), pop(), and top().  Implement push(), pop(), and top() using queue operations only.  You may use the Queue ADT or queue class previously designed.  You may assume that the queues are nonempty when executing your functions.  Also, you may consider your queues as global or static variables for ease of use, if you wish.

#include <iostream>
#include "queueStack.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    queueStack x;
    int tmp;
    
    x.push(8);
    x.push(3);
    tmp = x.top();
    cout << tmp << endl;  // The output should be 3.
    x.push(5);
    tmp = x.top();
    cout << tmp << endl;  // The output should be 5.
    x.pop();
    x.pop();
    tmp = x.top();
    cout << tmp << endl; // The output should be 8.
    x.push(1);
    x.push(2);
    tmp = x.top();
    cout << tmp << endl; // The output should be 2.
    
    return 0;
}
