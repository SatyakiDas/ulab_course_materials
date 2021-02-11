#include <iostream>
#include <ctime>

#define MAX_SIZE 100000000

int arr[MAX_SIZE];

using namespace std;

int main()
{
    for(int i=0; i<MAX_SIZE; i++) arr[i] = i;

    int search_key = MAX_SIZE;

    clock_t start_t = clock();
    // start of linear search code

    bool found = false;

    for(int i=0; i<MAX_SIZE; i++)
    {
        if(arr[i] == search_key)
        {
            found = true;
            break;
        }
    }

    //end of linear search code
    clock_t end_t = clock();

    if(found) cout << "Found " << search_key << endl;
    else cout << "Not found" << endl;

    clock_t exec_time = end_t - start_t;

    cout << "Execution time: " << ((float)exec_time * 1000000) / CLOCKS_PER_SEC << endl;

    return 0;
}
