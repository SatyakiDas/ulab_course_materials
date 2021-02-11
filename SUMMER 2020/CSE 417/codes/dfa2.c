#include <stdio.h>
#include <string.h>

int main()
{
    char Q[3][3];
    strcpy(Q[0], "q0");
    strcpy(Q[1], "q1");
    strcpy(Q[2], "q2");

    char sigma[] = {'a', 'b'};

    char F[1][3];
    strcpy(F[0], "q1");
    char q0[3];
    strcpy(q0, "q0");

    char curr_state[3];
    strcpy(curr_state, q0);

    while(1)
    {
        char symbol;
        scanf("%c", &symbol);
        int ascii = symbol;
        if(ascii == 10) break;
    }

    return 0;
}
