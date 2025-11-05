#include <iostream>
#include <stack> // Include the vector header
using namespace std;
void explainStack()
{ // LIFO = Last In First Out
    stack<int> st;
    st.push(1); // Push elements onto the stack
    st.push(2);

    cout << "Stack size: " << st.size() << endl; // Get the size of the stack

    cout << "Top element: " << st.top() << endl; // Access the top element

    st.pop(); // Remove the top element from the stack
    cout << "Top element after pop: " << st.top() << endl;

    st.pop(); // Remove the top element from the stack
    // Now the stack is empty

    stack<int> st2;
    st2.push(10);
    st2.push(20);
    st2.push(30);
    st2.push(40);

    while (st2.empty() == false) // Check if the stack is not empty
    {
        cout << st2.top() << " "; // Print the top element
        st2.pop();                // Remove the top element
    }
    cout << endl;
}
int main()
{
    explainStack();
    return 0;
}
