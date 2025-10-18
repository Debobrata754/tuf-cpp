#include <iostream>
using namespace std;

class Teacher
{
public:
    string name;
    string subject;
    string dept;
    // constructor
    Teacher()
    {
        cout << "Hi , I am a constructor" << endl;
        dept = "CSE";
    }
};

int main()
{
    Teacher t1;
    t1.name = "Dip";
    t1.subject = "C++";

    cout << t1.dept << endl;
    return 0;
}