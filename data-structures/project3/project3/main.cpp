//
//  main.cpp
//  project3
//
//  Created by Clayton Castro on 12/8/21.
//
#include "animalTree.hpp"

string path("/Users/clayton/Documents/cpp-projects/DataStructures/project3/project3/Data.txt");

int main()
{
    fstream file;
    struct stat buffer;
    //the stat function wont take the path variable as an argument so you'll need to copy the path here as well
    int present = stat("/Users/clayton/Documents/cpp-projects/DataStructures/project3/project3/Data.txt", &buffer);
    if(present == 0)
    {
        //initialize tree
        animalTree x;
        cout << "Welcome to the 20 questions style animal guessing game!" << endl;
        cout << "You will now be asked a series of questions to determine what animal you are thinking of.\n" << endl;
        //open the file and read the contents into the instance of the animalTree
        file.open(path,ios::in);
        x.deserialize(x.start,file);
        file.close();
        //begin game
        x.question(x.start,NULL);
        //open the file again to update any nodes appended during the game
        file.open(path,ios::out);
        x.serialize(x.start,file);
        file.close();
    }
    else
    {
        cout<<"error: FILE NOT FOUND"<<endl;
    }
    return 0;
}


