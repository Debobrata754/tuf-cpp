#include <iostream>
using namespace std;
// in pass by refrence it change the actual value of that num because it takes address of num as input.
void passByreference(int &a)
{
    a = a + 10;
    cout << a << endl;
}
// for arrays it can not take input as a copy it always takes as address (as default) and perform pass by reference.
void pBr(int arr[]) // int arr[] or int *arr both are same.
{
    arr[0] = arr[0] + arr[1];
}
int main()
{
    int a = 25;
    int arr[] = {1, 2, 3, 5};
    passByreference(a); // here it perform the tasks and print the value.
    cout << a << endl;  // here the actual value of the number will change.
    pBr(arr);
    cout << arr[0] << endl;
    return 0;
}