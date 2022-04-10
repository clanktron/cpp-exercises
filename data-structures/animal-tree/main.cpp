//
//  main.cpp
//  project3
//
//  Created by Clayton Castro on 12/8/21.
//
// #include "animalTree.hpp"


#include <iostream>
#include <fstream>
#include <string>
#include <sys/stat.h>

using namespace std;

string path("/Users/clayton/Documents/cpp-projects/DataStructures/project3/project3/Data.txt");

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
    animalTree() : newnode(NULL), root(NULL), start(NULL) {}
    
    void question(Node* root, Node* prev);
    void Deserialize(Node*& root, fstream& file);
    void Serialize(Node*& root, fstream& file);
    void updatetree(Node* fin, Node*& prefin);
    void guess(Node* root, Node* prev);
    void preorder(Node *root);

//    Node* getStart();
};



int main()
{
    fstream file;
    struct stat buffer;
    //was having some trouble getting my IDE to find the file so simply replace this with the path variable
    int present = stat("/Users/clayton/Documents/cpp-projects/DataStructures/project3/project3/Data.txt", &buffer);
    if(present == 0)
    {
        animalTree x;
        cout << "Welcome to the 20 questions style animal guessing game!" << endl;
        cout << "You will now be asked a series of questions to determine what animal you are thinking of.\n" << endl;
        file.open(path,ios::in);
        x.Deserialize(x.start,file);
        file.close();
        x.question(x.start,NULL);
        file.open(path,ios::out);
        x.Serialize(x.start,file);
        file.close();
    }
    else
    {
        cout<<"error: FILE NOT FOUND"<<endl;
    }
    return 0;
}

void animalTree::Serialize(Node*& root, fstream& file)
{
    if(root == NULL)
        file<<"#"<<endl;
    else
    {
        file<<root->ans<<endl;
        Serialize(root->left,file);
        Serialize(root->right,file);
    }
}

void animalTree::Deserialize(Node*& root,fstream& file)
{
            string str;
            if(!file.eof())
            {
                getline(file,str);
                cin.clear();
            }
            else
                return;
            if(str!="#")
            {
                root = new Node;
                root->ans = str;
                Deserialize(root->left,file);
                Deserialize(root->right,file);
            }
            else
            {
                root = NULL;
            }
}

void animalTree::preorder(Node *root)
{
    if(root == NULL)
        return;
    else
    {
        cout<<root->ans<<endl;
        preorder(root->left);
        preorder(root->right);
    }
}

void animalTree::updatetree(Node* fin, Node*& prefin)
{
    string ans,qn;
    cout << "I give up. What animal are you thinking of?" << endl;
    cin.ignore();
    getline(cin,ans);
    cout << "Now, please type a yes/no question that will distinguish a " << ans << " from a " << fin->ans << endl;
    getline(cin,qn);
    Node *ansnode, *qnnode;
    ansnode = new Node;
    ansnode->ans = ans;
    ansnode->left = NULL;
    ansnode->right = NULL;

    qnnode = new Node;
    qnnode->ans = qn;
    qnnode->left = ansnode;
    qnnode->right = fin;

    if(prefin->left == fin)
    {
        prefin->left = qnnode;
    }

    else if(prefin->right == fin)
    {
        prefin->right = qnnode;
    }
    fstream file;
    file.open(path,ios::out);
    Serialize(start,file);
    cout<<"Updated successfully"<<endl<<endl<<endl;
    string reply;
    cout<<"Do you want to play again?";
    cin>>reply;
        if(reply=="y" || reply=="Y")
        {
            system("CLS");
            question(start,NULL);
        }
        else if(reply=="n" || reply=="N")
        {
            cout<<"Thank you for teaching me a thing or two."<<endl;
        }
}

void animalTree::guess(Node* root, Node* prev)
{
    string reply;
    cout<<"Is your animal '"<<root->ans<<"' ?"<<"\t";
    cin>>reply;
    if(reply=="y" || reply=="Y")
    {
        cout << "\n Shall we play again?" << endl;
        cin>>reply;
        if(reply=="y" || reply=="Y")
        {
            system("CLS");
            question(start,prev);
        }
        else if(reply=="n" || reply=="N")
        {
            cout<<"Thank you for teaching me a thing or two."<<endl;
        }
    }
    else if(reply=="n" || reply=="N")
        updatetree(root, prev);
    else
    {
        cout<< "Please enter a valid answer Y or N" << endl;
        guess(root,prev);
    }
}

void animalTree::question(Node* root, Node* prev)
{
    string reply;
    if(root->left!=NULL && root->right!=NULL)
    {
        cout<<root->ans<<endl;
        cin>>reply;
        if(reply=="y" || reply=="Y")
            question(root->left,root);
        else if(reply=="n" || reply=="N")
            question(root->right,root);
        else
        {
            cout<<"Sorry, please enter a valid answer Y or N"<<endl;
            question(root,prev);
        }
    }
    else
    {
        guess(root,prev);
    }
}
