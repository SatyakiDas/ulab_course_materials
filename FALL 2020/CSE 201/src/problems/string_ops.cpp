
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "As time by";
    string s2 = "...";
    string s3 = "goes";
    string s = s1 + s2;

    cout << s << endl;

    s.insert(8, " ");
    s.insert(8, s3);

    cout << s << endl;

    s.erase(s1.size()+s3.size()+1);

    cout << s << endl;

    s.replace(3, 4, "Bill");

    cout << s << endl;

    return 0;
}
