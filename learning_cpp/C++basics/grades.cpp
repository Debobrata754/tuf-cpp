#include <iostream>
using namespace std;

int main()
{
    int marks;
    cin >> marks;
    if (marks >= 90)
    {
        cout << "Grade A" << endl;
    }
    else if (marks < 90 && marks >= 70)
    {
        cout << "Grade B" << endl;
    }
    else if (marks < 70 && marks >= 50)
    {
        cout << "Grade C" << endl;
    }
    else if (marks < 50 && marks >= 35)
    {
        cout << "Grade D" << endl;
    }
    else
    {
        cout << "FAIL!!" << endl;
    }
    return 0;
}