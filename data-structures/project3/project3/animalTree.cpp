//
//  animalTree.cpp
//  project3
//
//  Created by Clayton Castro on 12/8/21.
//

#include "animalTree.hpp"



void animalTree::serialize(Node*& root, fstream& file)
{
    if(root == NULL)
        file<<"#"<<endl;
    else
    {
        file<<root->ans<<endl;
        serialize(root->left,file);
        serialize(root->right,file);
    }
}

void animalTree::deserialize(Node*& root,fstream& file)
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
                deserialize(root->left,file);
                deserialize(root->right,file);
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
    serialize(start,file);
    cout<<"Updated successfully"<<endl<<endl;
    string reply;
    cout<<"Do you want to play again?\n";
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
    cout<<"Is your animal a "<<root->ans<<"?"<<"\t";
    cin>>reply;
    if(reply=="y" || reply=="Y")
    {
        cout << "Play again?" << endl;
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
