#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // range [10^-9 , 10^9]
    int num1 = INT_MAX;
    cout << num1 << endl;

    // range [10^-12 , 10^12]
    long num2 = LONG_MAX;
    cout << num2 << endl;

    // range [10^-18 , 10^18]
    long long num3 = LLONG_MAX;
    cout << num3 << endl;

    // to store floating point numbers
    // float store up to 6 decimal places
    float num4 = 3.1486049658098;
    cout << num4 << endl;

    // double store up to 14-15 decimal places
    double num5 = 3.141592653589793;
    cout << num5 << endl;

    // to store single character
    char ch = 'a';
    cout << ch << endl;

    // to store word or sentences
    string str = "hello";
    cout << str << endl;

    return 0;
}