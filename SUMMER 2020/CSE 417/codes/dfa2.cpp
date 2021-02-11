#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Q[] = {"q0", "q1", "q2"};
    char sigma[] = {'a', 'b'};
    string F[] = {"q1"};
    string q0 = "q0";

    string input;
    cin >> input;

    string curr_state = q0;

    int i = 0;

    while(i < input.size())
    {
        char curr_symbol = input[i];
        cout << curr_state << "--(" << curr_symbol << ")-->";

        if(curr_state == "q0" && curr_symbol == 'a') curr_state = "q1";
        else if(curr_state == "q0" && curr_symbol == 'b') curr_state = "q2";
        else if(curr_state == "q1" && curr_symbol == 'a') curr_state = "q1";
        else if(curr_state == "q1" && curr_symbol == 'b') curr_state = "q1";
        else if(curr_state == "q2" && curr_symbol == 'a') curr_state = "q2";
        else if(curr_state == "q2" && curr_symbol == 'b') curr_state = "q2";

        cout << curr_state << endl;
        i++;
    }

    bool accepted = false;
    int f_l = sizeof(F) / sizeof(F[0]);
    for(int i=0; i<f_l; i++)
    {
        if(F[i] == curr_state)
        {
            accepted = true;
            break;
        }
    }
    if(accepted) cout << "ACCEPTED" << endl;
    else cout << "Not Accepted" << endl;

    return 0;
}
