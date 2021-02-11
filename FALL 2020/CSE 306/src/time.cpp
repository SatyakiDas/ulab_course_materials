#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    clock_t start = clock();

    if(a > b && a > c) cout << a << endl;
    else if(b > a && b > c) cout << b << endl;
    else cout << c << endl;

    clock_t end = clock();

    cout << ((end - start) * 1000000)/CLOCKS_PER_SEC << endl;


    return 0;
}
