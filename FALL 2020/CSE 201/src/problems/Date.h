#ifndef DATE_H
#define DATE_H

class Date
{
    private:
        int month;
        int day;
        int year;
    public:
        void init();

        void print();

        void init(int month, int day, int year)
        {
            this->month = month;
            this->day = day;
            this->year = year;
        }
};

#endif // DATE_H
