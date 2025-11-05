#include <iostream>
#include <queue> // Include the vector header
using namespace std;
void explainQueue()
{ // FIFO = First in first out
    queue<int> q;
    q.push(1); // Enqueue elements
    q.push(2);
    q.push(3);

    while (q.empty() == false)
    {
        cout << "Front element: " << q.front() << endl; // Access the front element
        q.pop();                                        // Dequeue the front element
    }
}
int main()
{
    explainQueue();
    return 0;
}