#include <iostream>

using namespace std;

class A
{
public:
    virtual void printFunc() = 0;

    virtual void showFunc()
    {
        cout << "Show object of class A" << endl;
    }
};

class B: public A
{
public:
    void printFunc()
    {
        cout << "Print Object of Class B" << endl;
    }
};

int main()
{
    A* a;
    cout << "Enter choice: ";
    int choice;
    cin >> choice;
    if(choice == 1) a = new A();
    else if(choice == 2) a = new B();
    a->printFunc();
    a->showFunc();


    return 0;
}
