#include <iostream>
#include <string>

using namespace std;

typedef struct Stdnt
{
    string id;
    string name;
    string dept;
    float cgpa;
};

class Student
{
    public:
        string id;
        string name;
        string dept;
    private:
        float cgpa;
};

class Cylinder
{
    public:
        int radius;
        int height;

        float calculateVolume() {
            return 3.14 * radius * radius * height;
        }

        float calculateAreaOfSurface() {
            return 2 * 3.14 * radius * height;
        }

};

int main()
{
//    Student st1;
//    cout << st1.id << endl;
//    cout << st1.name << endl;
//    cout << st1.dept << endl;

    Cylinder c1;
    c1.radius = 5;
    c1.height = 8;

    Cylinder c2;
    c2.radius = 6;
    c2.height = 10;

    cout << "c1.calculateAreaOfSurface()" << " " << "c1.calculateVolume()" << endl;
    cout << c2.calculateAreaOfSurface() << " " << c2.calculateVolume() << endl;




    return 0;
}
