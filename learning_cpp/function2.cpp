#include <iostream>
using namespace std;

int sum(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1, num2);
    cout << res << endl;
    return 0;
}