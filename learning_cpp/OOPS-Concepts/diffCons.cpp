#include <iostream>
using namespace std;

class Teacher
{
public:
    string name;
    string subject;
    string dept;

    // Default constructor as wel as no-parameterized constructor
    Teacher()
    {
        cout << "Hi , I am a constructor" << endl;
    }

    // Parameterized constructor
    Teacher(string name, string subject, string dept)
    {
        this->name = name;
        this->subject = subject;
        this->dept = dept;
    }
    // copy constructor
    Teacher(Teacher &orgObj)
    {
        cout << "I am custom copy constructor" << endl;
        this->name = orgObj.name;
        this->subject = orgObj.subject;
        this->dept = orgObj.dept;
    }
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Dept: " << dept << endl;
    }
};

int main()
{
    Teacher t1("Dip", "C++", "Software Engineering");
    Teacher t2(t1); // custom copy constructor -invoke
    t2.getInfo();
    return 0;
}