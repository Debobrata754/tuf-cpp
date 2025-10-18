#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa)
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
    Student s1("Debobrata Paul", 8.5);
    s1.getInfo();
    Student s2(s1);      // custom copy constructor -invoke
    *(s2.cgpaPtr) = 9.0; // modifying cgpa of s2
    s1.getInfo();
    return 0;
}