#include <iostream>

#define MAX_SIZE 100000001

using namespace std;

int values[MAX_SIZE];

int main()
{
    for(int i=0; i<MAX_SIZE; i++) values[i] = 0;

    int arr_size;
    cin >> arr_size;

    for(int i=0; i<arr_size; i++)
    {
        int x;
        cin >> x;
        values[x]++;
    }

    int sk;
    cin >> sk;

    if(values[sk] > 0) cout << sk << " found in list." << endl;
    else cout << sk << " not found" << endl;

    return 0;
}
