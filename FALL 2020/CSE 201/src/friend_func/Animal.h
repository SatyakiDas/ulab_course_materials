#include <string>
#include <iostream>

using namespace std;

#ifndef ANIMAL_H

#define ANIMAL_H

class Animal
{
private:
    string kingdom;
    string phylum;
    string classs;
    string order;
    string family;

    void printClassification()
    {
        cout << "Kingdom: " << kingdom << endl;
        cout << "Phylum: " << phylum << endl;
        cout << "Class: " << classs << endl;
        cout << "Order: " << order << endl;
        cout << "Family: " << family << endl;
        cout << "Genus: " << genus << endl;
        cout << "Species: " << species << endl;
    }


public:
    string genus;
    string species;

    friend class Buddy;

    void printBuddyScore();
};

#endif // ANIMAL_H
