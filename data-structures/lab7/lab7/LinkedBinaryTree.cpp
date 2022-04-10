//
//  LinkedBinaryTree.cpp
//  lab7
//
//  Created by Clayton Castro on 11/24/21.
//

#include "LinkedBinaryTree.hpp"
void LinkedBinaryTree::printPostorder(LinkedBinaryTree* LinkedBinaryTree)
{
   if (LinkedBinaryTree == NULL)
       return;

   printPostorder(LinkedBinaryTree->left);

   printPostorder(LinkedBinaryTree->right);

   cout << LinkedBinaryTree->data << " ";
}

void LinkedBinaryTree::printInorder( LinkedBinaryTree* LinkedBinaryTree)
{
   if (LinkedBinaryTree == NULL)
       return;

   printInorder(LinkedBinaryTree->left);

   cout << LinkedBinaryTree->data << " ";

   printInorder(LinkedBinaryTree->right);
}

void LinkedBinaryTree::printPreorder( LinkedBinaryTree* LinkedBinaryTree)
{
   if (LinkedBinaryTree == NULL)
       return;
  
   cout << LinkedBinaryTree->data << " ";

   printPreorder(LinkedBinaryTree->left);

   printPreorder(LinkedBinaryTree->right);
}
