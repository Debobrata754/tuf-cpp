#include <iostream>
#include <vector> // Include the vector header
using namespace std;
void explainVector()
{
    vector<int> vec;
    vec.push_back(10); // Adding elements to the vector
    vec.push_back(20); // use push_back to add elements or use emplace_back to add elements
    vec.push_back(30);
    vec.emplace_back(40);

    cout << vec.size() << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // using iterators
    // use vectore<data_type>::iterator to declare an iterator for vector
    // or use auto keyword to declare an iterator for vector

    vector<int>::iterator beginItr = vec.begin(); // beginItr points to the first element.
    auto endItr = vec.end();                      // endItr points after the last element not exactly last element.
    for (auto i = beginItr; i < endItr; i++)      // that's why we use < operator not <= operator.
    {
        cout << *i << " ";
    }
    cout << endl;

    for (auto i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    // Duplicate vector
    vector<int> dupVec(vec);
    // If one start to copy the vector not the start then use the below syntax
    // vector<int> dupVec(vec.begin()+1, vec.end());//Duplicate vector from index 1 to end

    for (auto i : dupVec)
    {
        cout << i << " ";
    }
    cout << endl;

    // Access first and last elements
    cout << "First element: " << vec.front() << endl; // First element
    cout << "Last element: " << vec.back() << endl;   // Last element

    // Remove elements
    vec.pop_back();                                 // Remove last element
    cout << "Last element: " << vec.back() << endl; // Last element

    // erase elements
    vec.erase(vec.begin() + 1, vec.end() - 1); // Remove element from index 1 to second last element
    for (auto i : vec)
    {
        cout << i << " ";
    }
    cout << endl;

    // swap two vectors
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {4, 5, 6};
    swap(vec1, vec2);
    for (auto i : vec1)
    {
        cout << i << " ";
    }
    cout << endl;

    // Inset elements at specific position
    vector<int> vec3 = {1, 2, 3, 4, 6};
    vec3.insert(vec3.begin() + 1, 5); // Insert 5 at index 1

    for (auto it : vec3)
    {
        cout << it << " ";
    }
    cout << endl;

    // Clear the vector
    vec3.clear();
    cout << "Size after clear: " << vec3.size() << endl;
}
int main()
{
    explainVector();
    return 0;
}