#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "adult" << endl;
    }
    else if (age < 18 && age >= 10)
    {
        cout << "teen" << endl;
    }
    else
    {
        cout << "child" << endl;
    }
    return 0;
}