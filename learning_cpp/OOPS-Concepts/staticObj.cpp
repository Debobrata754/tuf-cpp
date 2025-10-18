#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor called" << endl;
    }

    ~A()
    {
        cout << "Destructor called" << endl;
    }
};
int main()
{
    if (true)
    {
        static A obj;
    }
    cout << "End of main function" << endl;
    return 0;
}