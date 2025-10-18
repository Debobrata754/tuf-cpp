#include <iostream>
using namespace std;

class student
{
public:
    string name;
    double *cgpaPtr;

    student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "cgpa: " << *cgpaPtr << endl;
    }
};

int main()
{
    student s1("Debobrata Paul", 8.5);
    s1.getInfo();
    student s2(s1);      // custom copy constructor -invoke
    *(s2.cgpaPtr) = 9.0; // modifying cgpa of s2
    s1.getInfo();
    return 0;
}