//
//  main.cpp
//  lab7
//
//  Created by Clayton Castro on 11/24/21.
//
#include <iostream>
#include "LinkedBinaryTree.hpp"

int main(int argc, const char * argv[]) {
    
    LinkedBinaryTree *root = new LinkedBinaryTree("A");
    root->left           = new LinkedBinaryTree("B");
    root->right       = new LinkedBinaryTree("C");
    root->left->left   = new LinkedBinaryTree("D");
    root->left->right = new LinkedBinaryTree("E");
    root->left->right->left = new LinkedBinaryTree("G");
    root->right->right= new LinkedBinaryTree("F");
    cout << "Preorder traversal " << endl;
    root->printPreorder(root);
    cout << "\nInorder traversal " << endl;
    root->printInorder(root);
    cout << "\nPostorder traversal " << endl;
    root->printPostorder(root);
    cout << endl;
       return 0;
    }
    
//Question 2:

//Inorder traversal is typically not supported by general trees due its undefined number of children per any given node. Despite this, an informal definition might be to simply read the children "left to right" but because of lack of parameters there is no standard algorithm to do so.
