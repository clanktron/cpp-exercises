#include <cstdlib>
#include <iostream>
#include <string>
//#include <conio.h>
using namespace std;
#include "menu.h"

void func1();
void func2();
void func3();
void Exit();

Menu m;

/*
 * 
 */
int main() 
{
    Menu m;
    m.addMenu("1. Function1", func1);
    m.addMenu("2. Function2", func2);
    m.addMenu("3. Function3", func3);
    m.addMenu("4. Exit", Exit);
    
    m.runMenu();
  
    return 0;
}

void func1()
{
    cout << "hello from function 1\n";
    m.waitkey();
}

void func2()
{
    cout << "hello from function 2\n";
    m.waitkey();
}

void func3()
{
    cout << "hello from function 3\n";
    m.waitkey();
}
void Exit()
{
    cout << "Goodbye" << endl;
    exit(0);
}


