#include <iostream>

using namespace std;

int fib[20];

int fibonacci_dyn(int n)
{

    if(n == 0) return fib[n];
    if(fib[n] == 0)
    {
        cout << "Value of n: " << n << endl;
        fib[n] = fibonacci_dyn(n - 1) + fibonacci_dyn(n - 2);
    }

    return fib[n];
}

int fibonacci_rec(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;

    cout << "Value of n: " << n << endl;
    return fibonacci_rec(n - 1) + fibonacci_rec(n - 2);
}

int main()
{
    fib[0] = 0;
    fib[1] = 1;
    int tenthFibonacci = fibonacci_dyn(10);

    cout << "The tenth fibonacci number is: " << tenthFibonacci << endl;

    cout << endl << endl << endl;

    tenthFibonacci = fibonacci_rec(10);
    cout << "The tenth fibonacci number is: " << tenthFibonacci << endl;

    return 0;
}
