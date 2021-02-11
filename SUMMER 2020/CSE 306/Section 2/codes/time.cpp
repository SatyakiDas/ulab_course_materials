#include <iostream>
#include <cstdlib>
#include <ctime>

#define MAX_SIZE 100000000

using namespace std;

int arr[MAX_SIZE];

int main()
{
    for(int i=0; i<MAX_SIZE; i++) arr[i] = i;

    int search_key = 100000000;

    clock_t start_t = clock();

    bool found = false;
    int index = -1;
    for(int i=0; i<MAX_SIZE; i++)
    {
        if(arr[i] == search_key)
        {
            found = true;
            index = i;
            break;
        }
    }

    clock_t end_t = clock();

    clock_t run_t = end_t - start_t;

    if(found)
    {
        cout << "Found " << search_key << " at index " << index << endl;
    }
    else cout << "Not Found" << endl;

    cout << "Execution time: " << ((float)run_t * 1000)/CLOCKS_PER_SEC << endl;




    return 0;
}
