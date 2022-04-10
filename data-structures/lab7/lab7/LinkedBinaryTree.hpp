//
//  LinkedBinaryTree.hpp
//  lab7
//
//  Created by Clayton Castro on 11/24/21.
//

#ifndef LinkedBinaryTree_hpp
#define LinkedBinaryTree_hpp
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class LinkedBinaryTree
{
public:
   string data;
LinkedBinaryTree *left, *right;
   LinkedBinaryTree(string data) 
   {
       this->data = data;
       left = right = NULL;
   }
    void printPostorder(LinkedBinaryTree* LinkedBinaryTree);
    void printPreorder(LinkedBinaryTree* LinkedBinaryTree);
    void printInorder(LinkedBinaryTree* LinkedBinaryTree);
};


#endif /* LinkedBinaryTree_hpp */
