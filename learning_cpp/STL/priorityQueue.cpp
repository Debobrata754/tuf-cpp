#include <iostream>
#include <queue> // Include the vector header
using namespace std;
void explainPQ()
{ // PQ = Priority Queue
  // stores the highest element at the top

    // If we want to create a min-heap then use the below syntax
    //  priority_queue<int, vector<int>, greater<int>> pq;
    priority_queue<int> pq;
    pq.push(5); // Push elements onto the priority queue
    pq.push(1);
    pq.push(10);
    pq.push(3);

    while (pq.empty() == false)
    {
        cout << pq.top() << " "; // Print the top element
        pq.pop();                // Remove the top element
        cout << endl;
    }
}
int main()
{
    explainPQ();
    return 0;
}