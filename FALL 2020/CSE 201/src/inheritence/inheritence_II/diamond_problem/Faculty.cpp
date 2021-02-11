

#include "Person.cpp"

class Faculty: public Person
{
public:
    void print_activity()
    {
        cout << "Teaching" << endl;
    }
};
