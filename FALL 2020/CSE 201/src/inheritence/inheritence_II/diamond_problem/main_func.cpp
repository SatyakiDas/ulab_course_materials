#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    int age;
    string name;

    void print_activity()
    {
        cout << "Doing" << endl;
    }
};

class Student: public Person
{
public:
    void print_activity()
    {
        cout << "Learning" << endl;
    }
};

class Faculty: public Person
{
public:
    void print_activity()
    {
        cout << "Teaching" << endl;
    }
};

class TeachersAssistant: public Student, public Faculty
{
public:
    void print_activity()
    {
        cout << "Teaching and Learning" << endl;
    }
};

int main()
{
    TeachersAssistant ta;
    ta.age = 20;
    ta.name = "Arif Fuad";

    return 0;
}
