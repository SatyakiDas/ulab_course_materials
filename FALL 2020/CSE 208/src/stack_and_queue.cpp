#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    int arr[7] = {23, 12, 4, 34, 56, 45, 67};

//    stack<int> myStack;
//
//    for(int i=0; i<7; i++) myStack.push(arr[i]);

//    cout << myStack.top() << endl;
//    myStack.pop();
//
//    cout << myStack.top() << endl;
//    myStack.pop();
//
//    cout << myStack.top() << endl;
//    myStack.pop();


    queue<int> myQueue;

    for(int i=0; i<7; i++) myQueue.push(arr[i]);

    cout << myQueue.front() << endl;
    myQueue.pop();

    cout << myQueue.front() << endl;
    myQueue.pop();

    cout << myQueue.front() << endl;
    myQueue.pop();

    return 0;
}
