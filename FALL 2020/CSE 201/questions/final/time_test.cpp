#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
	int hour = ltm->tm_hour;
	int minute = ltm->tm_min;
	int second = ltm->tm_sec;


    return 0;
}
