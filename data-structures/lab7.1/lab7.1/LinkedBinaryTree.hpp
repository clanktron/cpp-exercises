//
//  LinkedBinaryTree.hpp
//  lab7.1
//
//  Created by Clayton Castro on 11/24/21.
//

#ifndef LinkedBinaryTree_hpp
#define LinkedBinaryTree_hpp

#include <stdio.h>
#include <list>

class LinkedBinaryTree{
protected:
    struct Node{
        char elem;
        Node* par;
        Node* left;
        Node* right;
        Node() : elem(), par(NULL), left(NULL), right(NULL) { }
    };
public:
    class Position {
    private:
    Node* v;
    public:
    Position(Node* _v = NULL) : v( _v) { }
    char& operator*()
    { return v->elem; }
    Position left() const
    { return Position(v->left); }
    Position right() const
    { return Position(v->right); }
    Position parent() const
    { return Position(v->par); }
    bool isRoot() const
    { return v->par == NULL; }
    bool isExternal() const
      { return v->left == NULL && v->right == NULL; }
    friend class LinkedBinaryTree; // give tree access
    };
    typedef std::list<Position> PositionList;
    
public:
    LinkedBinaryTree();
    int size() const;
    bool empty() const;
    Position root() const;
    PositionList positions() const;
    void addRoot();
    void expandExternal(const Position& p);
    Position removeAboveExternal(const Position& p);

protected:
    void preorder(Node* v, PositionList& pl) const;
private:
    Node* _root;
    int n;
};
#endif /* LinkedBinaryTree_hpp */
