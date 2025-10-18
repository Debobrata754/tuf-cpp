#include <iostream>
using namespace std;

class parent
{
public:
    void getInfo()
    {
        cout << "parent class..\n";
    }
};
class child
{
public:
    void getInfo()
    {
        cout << "child class..\n";
    }
};
int main()
{
    parent p1;
    p1.getInfo();
    child c1;
    c1.getInfo();
    return 0;
}
