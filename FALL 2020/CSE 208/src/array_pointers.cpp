#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int arr[10];
//    arr[0] = 78;
//    arr[1] = 16;
//    arr[6] = 65;
//
//    cout << &arr[6] << endl;
//    cout << arr + 6 << endl;

    // &arr[index] == arr + index
    for(int i=0; i<10; i++) *(arr+i) = rand();
    for(int i=0; i<10; i++) cout << *(arr+i) << " ";
    cout << endl;


//    int* ptr = arr;

    // ptr++ & *ptr++ are equivalent

    // &arr[6] == arr + 6

//    *ptr = *ptr + 1;
//
//    cout << *ptr << endl;
//    for(int i=0; i<10; i++)
//    {
//        *ptr = rand();
//        ptr++;
//    }

    for(int i=0; i<10; i++) cout << arr[i] << " ";
    cout << endl;

//    ptr = arr;
//    for(int i=0; i<10; i++)
//    {
//        cout << *ptr << " ";
//        ptr++;
//    }
//    cout << endl;

    return 0;
}
