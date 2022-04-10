#ifndef MENU_H
#define MENU_H
#include <string>
#include <vector>

struct menuItem
{
void(*func) ();
string descript;
    
};
class Menu
{
private:
    vector <menuItem> mi;
    int count;
    void runselection();
public:
    Menu();
    void addMenu(string description, void(*f)());
    void runMenu();
    void waitkey();
};




#endif /* MENU_H */

