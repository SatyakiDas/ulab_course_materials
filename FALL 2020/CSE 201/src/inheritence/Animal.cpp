#include <string>
#include <iostream>

using namespace std;

class Animal
{
    protected:
        string foot1;
        string foot2;
        string foodhabit;

        void move()
        {
            cout << "Waling/Running/Flying" << endl;
        }

        void cry()
        {
            cout << "Making animal noises" << endl;
        }
};
