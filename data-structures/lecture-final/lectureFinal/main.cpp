//
//  main.cpp
//  lectureFinal
//
//  Created by Clayton Castro on 12/13/21.
//

#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

node* penultimateNode(node* x);
int sumOfOdd(int x);

int main(int argc, const char * argv[]) {

//    int x;
//    cout << "input an integer\n";
//    cin >> x;
//    cout << sumOfOdd(x) << endl;
//
    
    
    
    
    
    return 0;
}

int sumOfOdd(int x){
    int sum(0), tmp(x);
    if((x%2)==0){
        tmp=tmp+1;
    }
    while(tmp>1){
        sum+=tmp-2;
        tmp=tmp-2;
    }
    return sum;
}

node* penultimateNode(node* x){
    node* tmp = x;
    while(tmp->next->next!=nullptr){
        tmp=tmp->next;
    }
    return tmp;
}

int count(binaryTree* root) {
    if(root == NULL)
        return 0;
    else{
        if(root->left == NULL && root->right == NULL){
            return 1;
        }
        else{
            return count(root->left) + count(root->right) + 1;
        }
    }
}

