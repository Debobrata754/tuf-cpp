#include <iostream>
using namespace std;

class Shape
{ // abstract class because it contains at least one pure virtual function.
public:
    virtual void draw() = 0; // pure virtual function means that the derived class must implement this function.
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "drawing a circle\n";
    }
};
int main()
{
    Circle c1;
    c1.draw();
    return 0;
}