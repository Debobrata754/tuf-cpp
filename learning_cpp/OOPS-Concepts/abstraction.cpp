#include <iostream>
using namespace std;

class shape
{ // abstract class because it contains at least one pure virtual function.
public:
    virtual void draw() = 0; // pure virtual function means that the derived class must implement this function.
};

class circle : public shape
{
public:
    void draw()
    {
        cout << "drawing a circle\n";
    }
};
int main()
{
    circle c1;
    c1.draw();
    return 0;
}