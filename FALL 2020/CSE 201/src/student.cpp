#include <iostream>
#include <string>

using namespace std;

class Student
{
    public:
        unsigned long long ID;
        string fname;
        string lname;
        string dept;
        string gender;
        float cgpa;
        string origin;

        void inputData()
        {
            cout << "Enter ID: ";
            cin >> ID;
            cout << "Enter First Name: ";
            cin >> fname;
            cout << "Enter Last Name: ";
            cin >> lname;
            cout << "Enter Department: ";
            cin >> dept;
            cout << "Enter Gender: ";
            cin >> gender;
            cout << "Enter CGPA: ";
            cin >> cgpa;
            cout << "Enter Origin: ";
            cin >> origin;
        }

        void displayData()
        {
            cout << "-------------------------------------------------------------------------------" << endl;
            cout << "ID: " << ID << endl;
            cout << "Full Name: " << fname << " " << lname << endl;
            cout << "Department: " << dept << endl;
            cout << "Gender: " << gender << endl;
            cout << "CGPA: " << cgpa << endl;
            cout << "Origin: " << origin << endl;
        }

};

int main()
{
    Student allStudents[100];
    int numberOfStudents;
    cin >> numberOfStudents;

    for(int i=0; i<numberOfStudents; i++)
    {
        allStudents[i].inputData();
    }

    for(int i=0; i<numberOfStudents; i++)
    {
        allStudents[i].displayData();
    }


    return 0;
}
