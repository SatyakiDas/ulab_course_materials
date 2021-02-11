#ifndef CLASSDATE_H
#define CLASSDATE_H

class ClassDate
{
private:
    int month;
    int day;
    int year;
public:
    void init(int month, int day, int year)
    {
        this->month = month;
        this->day = day;
        this->year = year;
    }

    void init();

    void print();
};

#endif // CLASSDATE_H
