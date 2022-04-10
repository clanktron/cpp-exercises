//
//  main.cpp
//  Project1
//
//  Created by Clayton Castro on 9/25/21.
//
#include "gameEntry.hpp"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    //open text file for reading
    ifstream gameFile;
    gameFile.open("games.txt");
    
    //read first input from file and save as the game name
    string gameName;
    gameFile >> gameName;
    gameEntry c1(gameName);
    
    //read to the end of the file saving data as scoreEntries
    //note: an exception is thrown if the file being read has either a whitespace or return after the last date, otherwise it should work properly
    while(!gameFile.eof()){
        string name, date;
        int points;

        gameFile >> name;
        gameFile >> points;
        gameFile >> date;
        
        scoreEntry tmp(name, points, date);
        c1.add(tmp);
    }
    //print first test case
    c1.print();
    
    
    //uncomment to test the remove function
    //c1.remove(2)
    //c1.print();
    
    
    //more entries and second game for additional test case
    scoreEntry s1("JMR", 4500, "09/03/2021"),
    s2("GCP", 6400, "08/16/2021"),
    s3("RBA", 5200, "08/31/2021"),
    s4("RBA", 5700, "09/01/2021"),
    s5("BWP", 6200, "08/22/2021"),
    s6("LMA", 8900, "07/05/2021"),
    s7("VRT", 7400, "08/12/2021"),
    s8("OFT", 1200, "09/04/2021"),
    s9("GTB", 3400, "07/18/2021"),
    s10("HBR", 9800, "08/14/2021"),
    s11("DRT", 8200, "08/06/2021"),
    s12("HBR", 10100, "09/02/2021"),
    s13("XYZ", 4800, "7/31/2021");

    
    gameEntry c2("Pac-Man");

    c2.add(s1);
    c2.add(s2);
    c2.add(s3);
    c2.add(s4);
    c2.remove(0);
    c2.add(s5);
    c2.add(s6);
    c2.add(s7);
    c2.add(s8);
    c2.add(s9);
    c2.add(s10);
    c2.add(s11);
    c2.add(s12);
    c2.remove(6);
    c2.add(s13);


    c2.print();
    
    //test of removing all entries before given date
    c1.remove("09/01/2021");
    
    c1.print();
    
    return 0;
}
