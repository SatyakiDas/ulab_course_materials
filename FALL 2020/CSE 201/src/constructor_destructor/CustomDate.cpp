#include <ctime>
#include <iostream>

using namespace std;

class CustomDate
{
public:
    int day;
    int month;
    int year;

    CustomDate()
    {
        time_t now = time(0);
        tm *ltm = localtime(&now);

        month = 1 + ltm->tm_mon;
        day = ltm->tm_mday;
        year = 1900 + ltm->tm_year;
    }

    CustomDate(int day)
    {
        this->day = day;

        time_t now = time(0);
        tm *ltm = localtime(&now);

        month = 1 + ltm->tm_mon;
        year = 1900 + ltm->tm_year;
    }

    CustomDate(int day, int month)
    {
        this->day = day;
        this->month = month;

        time_t now = time(0);
        tm *ltm = localtime(&now);

        year = 1900 + ltm->tm_year;
    }

    CustomDate(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    CustomDate(CustomDate &obj)
    {
        day = obj.day;
        month = obj.month;
        year = obj.year;
    }

    void print()
    {
        cout << month << "-" << day << "-" << year << endl;
    }

    ~CustomDate()
    {
        cout << "This is the destructor of CustomDate class" << endl;
    }
};
