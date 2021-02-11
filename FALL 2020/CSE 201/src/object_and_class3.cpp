#include <iostream>

using namespace std;

class Student
{
    public:
        string firstName;
        string lastName;
        string ID;
        string department;

        void inputStudentInfo()
        {
            cout << "Enter First Name: ";
            cin >> firstName;
            cout << "Enter Last Name: ";
            cin >> lastName;
            cout << "Enter ID: ";
            cin >> ID;
            cout << "Enter Department: ";
            cin >> department;
        }

        void showStudentInfo()
        {
            cout << "Name: " << firstName << " " << lastName << endl;
            cout << "ID: " << ID << endl;
            cout << "Department: " << department << endl;
            cout << "______________________________________________" << endl;
        }

    private:
        float cgpa;

        void calculateCGPA()
        {
            cgpa = 3.65;
        }
};

int main()
{
    Student st1, st2, st3, st4, st5;
//    st1.inputStudentInfo();
//    st2.inputStudentInfo();
//    st3.inputStudentInfo();
//    st4.inputStudentInfo();
//    st5.inputStudentInfo();
//
//    st1.showStudentInfo();
//    st2.showStudentInfo();
//    st3.showStudentInfo();
//    st4.showStudentInfo();
//    st5.showStudentInfo();
    Student stdnts[10000];
    cout << "Enter number of students: ";
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        stdnts[i].inputStudentInfo();
    }
    for(int i=0; i<n; i++)
    {
        stdnts[i].showStudentInfo();
    }

    return 0;
}
