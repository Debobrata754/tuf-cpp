#include <iostream>
using namespace std;
void explainPair()
{
    pair<int, int> pr1 = make_pair(1, 2);
    cout << "First element: " << pr1.first << endl;
    cout << "Second element: " << pr1.second << endl;

    pair<int, char> pr2 = make_pair(5, 'A');
    cout << "First element: " << pr2.first << endl;
    cout << "Second element: " << pr2.second << endl;

    pair<pair<int, int>, char> pr3 = make_pair(make_pair(10, 20), 'B');
    cout << "First element of nested pair: " << pr3.first.first << endl;
    cout << "Second element of nested pair: " << pr3.first.second << endl;
    cout << "Second element of outer pair: " << pr3.second << endl;
}
int main()
{
    explainPair();
    return 0;
}