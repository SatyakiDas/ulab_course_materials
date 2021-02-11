#include "ClassDate.cpp"

int main()
{
    ClassDate today, birthday, aDate;

    today.init();
    birthday.init(12, 11, 1997);


    cout << "Today's Date: ";
    today.print();

    cout << "Felix' Birthday: ";
    birthday.print();

    return 0;
}
