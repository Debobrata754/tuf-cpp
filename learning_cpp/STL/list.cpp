#include <iostream>
#include <list> // Include the vector header
using namespace std;
void explainList()
{
    // List and Deque is also have same functionalities like vector...but have some specific functionalities
    // List is implemented using doubly linked list internally...so insertion and deletion is very fast in list
    list<int> ls = {1, 2, 3, 4, 5};
    ls.push_front(3); // Add element at the front
    ls.push_back(7);  // Add element at the back

    for (auto i : ls)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    explainList();
    return 0;
}
