#include <iostream>
using namespace std;

class A
{
public:
    int x;

    void incX()
    {
        x = x + 1;
    }
};
int main()
{
    A obj1;
    A obj2;
    obj1.x = 100;
    obj2.x = 200;
    cout << obj1.x << endl;
    cout << obj2.x << endl;
    return 0;
}