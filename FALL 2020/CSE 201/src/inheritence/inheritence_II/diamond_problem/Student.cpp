

#include "Person.cpp"

class Student: public Person
{
public:
    void print_activity()
    {
        cout << "Learning" << endl;
    }
};
