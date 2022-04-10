//
//  main.cpp
//  labfinal2
//
//  Created by Clayton Castro on 12/13/21.
//

//  Implement a C++ class or Java class called FinalList. This class is to be a linked list that does not use a template class/generic class.  This class may use the Node class that we previously created in class.  You must design this class yourself.  The FinalList class is to have four functions: insertFront(e), removeRear(), size(), and print().  insertFront(e) will insert e to the front of the list. removeRear() will remove the element at the rear of the list.  size() will return the number of elements in the list.  print() will output all of the elements in the list to the screen.  You may assume that removeRear() will execute with at least one element in the list.

// Create FinalList to hold elements that are strings.
// Insert “Bob” to the list.
// Insert “Dolores” to the list.
// Insert “Lori” to the list.
// Insert “Art” to the list.
// Insert “Victoria” to the list.
// Output the size of the list. (The result should be 5.)
// Remove from the rear of the list.
// Print the list. (The result should be Victoria Art Lori Dolores)

#include <iostream>
#include "finalList.hpp"

int main(int argc, const char * argv[]) {
    
    finalList x;
    
    x.insertFront("Bob");
    x.insertFront("Dolores");
    x.insertFront("Lori");
    x.insertFront("Art");
    x.insertFront("Victoria");
    cout << x.size() << endl;
    x.removeRear();
    x.print();
    
    return 0;
}
