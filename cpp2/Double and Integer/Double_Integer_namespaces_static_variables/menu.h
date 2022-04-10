// Clayton
// MSJC ID: 0558597
// Assignment 8 - Namespaces, Static Variables
// declaration of menu class
#pragma once
#include <string>
#include <vector>

using std::vector;
using std::string;

namespace Clayton
{


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
        static Menu* pInstance;

    public:
        static Menu* Instance();
        void addMenu(string description, void(*f)());
        void runMenu();
        void waitkey();
        Menu();
    };


}