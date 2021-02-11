#include <iostream>

#define MAX_SIZE 11

using namespace std;

int fib_series[MAX_SIZE];
int fib_values[MAX_SIZE];

int fib(int n)
{
    if(n == 0) return fib_values[0];
    else if(n == 1) return fib_values[1];

    if(fib_values[n] == 0)
    {
        fib_series[n]++;
        fib_values[n] = fib(n - 1) + fib(n - 2);
    }

    return fib_values[n];
}

int main()
{
    for(int i=0; i<MAX_SIZE; i++)
    {
        fib_series[i] = 0;
        fib_values[i] = 0;
    }
    fib_values[1] = 1;

    cout << fib(MAX_SIZE - 1) << endl;

    for(int i=0; i<MAX_SIZE; i++) cout << fib_series[i] << " ";
    cout << endl;


    return 0;
}
