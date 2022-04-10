// Clayton
// MSJC ID: 0558597
// Assignment 7 - Dynamic Memory
// declaration of menu class
#pragma once
#include <string>
#include <vector>

using std::vector;
using std::string;


struct menuItem
{
    string descript;
    void(*func) ();
};
class Menu
{
private:
    vector <menuItem> mi;
    void runselection();
public:
    void addMenu(string description, void(*f)());
    void runMenu();
    void waitkey();
    Menu();
};


