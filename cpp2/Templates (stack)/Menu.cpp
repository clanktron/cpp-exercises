#include <cstdlib>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
#include "menu.h"
/*
 * 
 */
Menu::Menu()
: count(0)
{
    
}
void Menu::addMenu(string description, void(*f)())
{
    menuItem temp = { f,description };
    this->mi.push_back(temp);
    count++;

}
void Menu::runMenu()
{
    for(;;)
    {
        system("CLS");
        for (int i = 0; i < count; i++)
        {
            cout << this->mi[i].descript << endl;
        }
        runselection();
    }
}
void Menu::runselection()
{
    int select;
    cin >>select;
    if(select <= count)
    {
        this->mi[select - 1].func();
    }
}

void Menu::waitkey()
{
    cout << "Press any key to continue" << endl;
    while (!_kbhit()); // kbhit is depricated. use _kbhit
    fflush(stdin);
}

