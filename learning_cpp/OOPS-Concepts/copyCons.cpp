#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    float cgpa;
    string dept;

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "cgpa: " << cgpa << endl;
        cout << "Dept: " << dept << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Debobrata Paul";
    s1.cgpa = 8.5;
    s1.dept = "Computer Science";
    Student s2(s1); // custom copy constructor -invoke
    s2.getInfo();
    return 0;
}