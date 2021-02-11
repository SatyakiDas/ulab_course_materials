#include <iostream>

using namespace std;

class Animal
{
public:
    void cry()
    {
        cout << "Performing cry" << endl;
    }
};

class Dog: public Animal
{
public:
    void cry()
    {
        cout << "Barking because this is a dog" << endl;
    }
};


int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{

    int result = add(7, 8); // compile time polymorphism

    int result2 = add(7, 8, 9); // compile time polymorphism

    Animal* a;

    int choice;
    cout << "1. General Animal\t2. Dog. Enter choice: ";
    cin >> choice;
    if(choice == 1) a = new Animal();
    else if(choice == 2) a = new Dog();


    a->cry(); // run time polymorphism


    return 0;
}

