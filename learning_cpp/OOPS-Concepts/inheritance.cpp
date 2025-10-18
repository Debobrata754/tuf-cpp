#include <iostream>
using namespace std;

class Teacher
{
public:
    string name;
    int age;
    Teacher()
    {
        cout << "parent constructor...\n";
    }
};

class Student : public Teacher
{
public:
    int roll;

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "roll: " << roll << endl;
    }
    Student()
    {
        cout << "child constructor...\n";
    }
};
int main()
{
    Student s1;
    s1.name = "Prasanta";
    s1.age = 24;
    s1.roll = 101;
    s1.getInfo();
    return 0;
}
