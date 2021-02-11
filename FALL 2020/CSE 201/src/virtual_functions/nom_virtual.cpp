#include <iostream>

using namespace std;

class A
{
public:
    virtual void printFunc()
    {
        cout << "Print Object of Class A" << endl;
    }

    virtual void showFunc()
    {
        cout << "Show Object of Class A" << endl;
    }
};

class B: public A
{
public:
    void printFunc()
    {
        cout << "Print Object of Class B" << endl;
    }

    void showFunc()
    {
        cout << "Show Object of Class B" << endl;
    }
};

int main()
{
//    A* a;
    cout << "Enter choice: ";
    int choice;
    cin >> choice;
    if(choice == 1)
    {
//        a = new A();
        A* a = new A();
        a->printFunc();
        a->showFunc();
    }
    else if(choice == 2)
    {
//        a = new B();
        B* a = new B();
        a->printFunc();
        a->showFunc();
    }
//    a->printFunc();
//    a->showFunc();

    return 0;
}
