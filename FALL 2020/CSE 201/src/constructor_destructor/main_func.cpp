#include "CustomDate.cpp"

using namespace std;

int main()
{
    CustomDate date1, date2(10), date3(27, 11), date4(28, 10, 2019);
    CustomDate date5(date1);

    date1.print();
    date2.print();
    date3.print();
    date4.print();
    date5.print();

    return 0;
}
