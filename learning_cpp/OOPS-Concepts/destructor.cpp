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
    // destructor
    ~student()
    {
        cout << "Hi, I delete everything." << endl;
        delete cgpaPtr;
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
    return 0;
}