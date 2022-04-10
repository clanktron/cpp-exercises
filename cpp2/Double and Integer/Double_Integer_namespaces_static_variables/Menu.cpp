// Clayton
// MSJC ID: 0558597
// Assignment 8 - Namespaces, Static Variables
// menu class function definitions
#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>
#include "menu.h"

using namespace std;

namespace Clayton
{
    Menu::Menu()
    {
    }

    Menu* Menu::pInstance = NULL;
    Menu *Menu::Instance()
    {
        if (pInstance == NULL) {
            pInstance = new Menu;
        }
        return pInstance;
    }

    void Menu::addMenu(string description, void(*f)())
    {
        menuItem m{ description, f };
        mi.push_back(m);

    }
    void Menu::runMenu()
    {
        for (;;)
        {
            system("CLS");
            for (menuItem m : mi)
            {
                cout << m.descript << endl;
            }
            runselection();
        }
    }
    void Menu::runselection()
    {
        int select;
        cin >> select;
        if (select <= this->mi.size())
        {
            this->mi[select - 1].func();
        }
    }

    void Menu::waitkey()
    {
        cout << "Press any key to continue" << endl;
        while (!_kbhit());
        fflush(stdin);
    }

}