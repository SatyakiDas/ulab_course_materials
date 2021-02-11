#include <ctime>
#include <iostream>

using namespace std;

class Date
{
public:
  int month;
  int day;
  int year;

  void init(int month, int day, int year)
  {
    this->month = month;
    this->day = day;
    this->year = year;
  }

  void init()
  {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    month = 1 + ltm->tm_mon;
    day = ltm->tm_mday;
    year = 1900 + ltm->tm_year;
  }

  void print()
  {
    cout << day << "." << month << "." << year << endl;
  }
};
