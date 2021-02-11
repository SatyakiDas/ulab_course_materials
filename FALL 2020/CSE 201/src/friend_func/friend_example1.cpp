#include <iostream>
#include <string>

#include "Animal.h"
#include "Buddy.h"

using namespace std;

void Buddy::setAndPrintAnimal(Animal &a)
{
    a.kingdom = "Animalia";
    a.phylum = "Chordata";
    a.classs = "Mammalia";
    a.order = "Primates";
    a.family = "Hominidae";
    a.genus = "Homo";
    a.species = "Homo Sapiens";

    a.printClassification();
}

void Animal::printBuddyScore()
{
    Buddy b;
    cout << b.buddyScore << endl;
}

//class Animal
//{
//private:
//    string kingdom;
//    string phylum;
//    string classs;
//    string order;
//    string family;
//
//    void printClassification()
//    {
//        cout << "Kingdom: " << kingdom << endl;
//        cout << "Phylum: " << phylum << endl;
//        cout << "Class: " << classs << endl;
//        cout << "Order: " << order << endl;
//        cout << "Family: " << family << endl;
//        cout << "Genus: " << genus << endl;
//        cout << "Species: " << species << endl;
//    }
//
//public:
//    string genus;
//    string species;
//    friend class Buddy;
//};
//
//class Buddy
//{
//public:
//    void setAndPrintAnimal(Animal &a)
//    {
//        a.kingdom = "Animalia";
//        a.phylum = "Chordata";
//        a.classs = "Mammalia";
//        a.order = "Primates";
//        a.family = "Hominidae";
//        a.genus = "Homo";
//        a.species = "Homo Sapiens";
//
//        a.printClassification();
//    }
//
//private:
//    int buddyScore;
//};



//class GoodBuddy: public Buddy
//{
//public:
//    void sapAnimal(Animal &a)
//    {
//        a.kingdom = "Animalia";
//        a.phylum = "Chordata";
//        a.classs = "Mammalia";
//        a.order = "Primates";
//        a.family = "Hominidae";
//        a.genus = "Homo";
//        a.species = "Homo Sapiens";
//
//        a.printClassification();
//    }
//};

int main()
{
    Animal a;
    Buddy b;
    b.setAndPrintAnimal(a);
    a.printBuddyScore();

    return 0;
}
