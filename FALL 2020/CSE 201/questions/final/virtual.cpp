#include <iostream>
#include <string>

using namespace std;

class Base
{
protected:
	int m_value;

public:
	string getName()
	{
	    return "Base";
    }
};

class Derived : public Base
{
public:
    string getName()
    {
        return "Derived";
    }
};

int main()
{
    Base* b = new Derived();
	cout << b->getName() << endl;

	return 0;
}
