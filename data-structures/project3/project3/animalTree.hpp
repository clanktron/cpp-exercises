//
//  animalTree.hpp
//  project3
//
//  Created by Clayton Castro on 12/8/21.
//

#ifndef animalTree_hpp
#define animalTree_hpp
#include <iostream>
#include <fstream>
#include <string>
#include <sys/stat.h>
#include <string>
using namespace std;

class animalTree{
private:
    struct Node
    {
        string ans;
        struct Node* left;
        struct Node* right;
    };
    Node *newnode, *root;
;
    
public:
    Node *start;
    //generic funtion to display a question node
    void question(Node* root, Node* prev);
    //algorithm for processing text file into readable data
    void deserialize(Node*& root, fstream& file);
    //algorithm for translating altered tree into text file
    void serialize(Node*& root, fstream& file);
    //algorithm for appending a new node to the tree using user input
    void updatetree(Node* fin, Node*& prefin);
    //the final attempt by the "AI" to guess the animal in question
    void guess(Node* root, Node* prev);
    void preorder(Node *root);
};

extern string path;

#endif /* animalTree_hpp */
