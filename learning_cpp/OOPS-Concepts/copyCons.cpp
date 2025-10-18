#include <iostream>
using namespace std;

class student
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
    student s1;
    s1.name = "Debobrata Paul";
    s1.cgpa = 8.5;
    s1.dept = "Computer Science";
    student s2(s1); // custom copy constructor -invoke
    s2.getInfo();
    return 0;
}