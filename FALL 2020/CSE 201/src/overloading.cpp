#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a+ b + c;
}

int add(string a, string b)
{
    return a.size() + b.size();
}

int main()
{
    cout << add(2, 3) << endl;
    cout << add(2, 3, 4) << endl;
    cout << add("CSE", "201") << endl;

    return 0;
}
