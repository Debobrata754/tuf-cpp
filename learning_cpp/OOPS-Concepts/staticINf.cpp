#include <iostream>
using namespace std;
void fun()
{
    int x = 0;
    cout << "x : " << x << endl;
    x++;
}
void fun1()
{
    static int y = 0;
    cout << "y : " << y << endl;
    y++;
}

int main()
{
    fun();
    fun();
    fun();
    fun1();
    fun1();
    fun1();
    return 0;
}