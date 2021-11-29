/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tim Phung
 */
#include "std_lib_facilities.h"

using namespace std;

class Name_value {
public:
	string name;
	int score;
	Name_value(string n, int s): name(n), score(s) { }
};

int main()
{
    vector<Name_value> pair;

    string nameStr;
    int value;

    cout << "Enter your name and value pairs (Terminate input with NoName 0): \n";
    while(cin >> nameStr >> value && nameStr!="NoName")
    {
        for (int i=0; i<pair.size(); i++)
            if (nameStr == pair[i].name) throw runtime_error("Duplicate name");
        pair.push_back(Name_value(nameStr,value));
    }

    for (int i=0; i<pair.size(); i++)
        cout << '(' << pair[i].name << ',' << pair[i].score << ")\n";

    return 0;
}
