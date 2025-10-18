#include <iostream>
using namespace std;

class teacher
{
public:
    string name;
    int age;
    teacher()
    {
        cout << "parent constructor...\n";
    }
};

class student : public teacher
{
public:
    int roll;

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "roll: " << roll << endl;
    }
    student()
    {
        cout << "child constructor...\n";
    }
};
int main()
{
    student s1;
    s1.name = "Prasanta";
    s1.age = 24;
    s1.roll = 101;
    s1.getInfo();
    return 0;
}
