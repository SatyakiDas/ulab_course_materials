
#include "Student.cpp"
#include "Faculty.cpp"

class TeachersAssistant: public Student, public Faculty
{
public:
    print_activity()
    {
        cout << "Teaching and Learning" << endl;
    }
};
