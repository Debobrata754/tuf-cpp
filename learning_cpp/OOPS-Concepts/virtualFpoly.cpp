#include <iostream>
using namespace std;

class Parent
{
public:
    void getInfo()
    {
        cout << "parent class..\n";
    }
    virtual void hello()
    {
        cout << "Hello from parent class\n";
    }
};
class Child
{
public:
    void getInfo()
    {
        cout << "child class..\n";
    }
    void hello()
    {
        cout << "Hello from child class\n";
    }
};
int main()
{
    Child c1;
    c1.hello();
    return 0;
}
