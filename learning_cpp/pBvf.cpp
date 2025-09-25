#include <iostream>
using namespace std;
// in pass by value it do not change the actual value of that num because it takes a copy of that num.
void passByvalue(int n)
{
    n = n + 10;
    cout << n << endl;
}

int main()
{
    int num = 50;
    passByvalue(num);    // here it perform the tasks and print the value.
    cout << num << endl; // But the actual value of the number is remain same.
    return 0;
}