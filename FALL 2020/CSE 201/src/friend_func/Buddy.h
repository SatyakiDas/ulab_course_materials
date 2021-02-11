#include "Animal.h"

#ifndef BUDDY_H

#define BUDDY_H

class Buddy
{
private:
    int buddyScore;

public:
    void setAndPrintAnimal(Animal &a);
    friend class Animal;
};

#endif // BUDDY_H
