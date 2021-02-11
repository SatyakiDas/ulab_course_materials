#include <ctime>
#include <iostream>

#include "ClassDate.h"

using namespace std;


void ClassDate::init()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    month = 1 + ltm->tm_mon;
    day = ltm->tm_mday;
    year = 1900 + ltm->tm_year;
}

void ClassDate::print()
{
    cout << month << "-" << day << "-" << year << endl;
}
