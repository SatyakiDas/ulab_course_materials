#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Q[] = {"even", "odd"};
    int sigma[] = {0, 1};
    string q0 = "even";
    string F[] = {"even"};

    string input;
    cin >> input;

    int i = 0;

    string states = q0;

    while(i < input.size())
    {
        cout << "Currently at " << states << ". found " << input[i];
        int curr_bit = input[i] - '0';

        if(curr_bit == 1)
        {
            if(states == "even")
            {
                states = "odd";
            }
            else if(states == "odd")
            {
                states = "even";
            }
        }
        cout << " transitioned to " << states;
        cout << endl;
        i++;
    }

    bool accepted = false;
    int l = sizeof(F) / sizeof(F[0]);

    for(int i=0; i < l; i++)
    {
        if(F[i] == states)
        {
            accepted = true;
            break;
        }
    }

    if(accepted) cout << "Accepted" << endl;
    else cout << "Not accepted" << endl;

    return 0;
}
