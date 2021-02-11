#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    printf("%d\n", add(2, 3));
    printf("%d\n", add(2, 3, 4));

    return 0;
}
