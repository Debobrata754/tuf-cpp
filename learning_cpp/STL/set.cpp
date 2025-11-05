#include <iostream>
#include <set> // Include the vector header
using namespace std;
void explainSet()
{ // stores only unique elements in ascending order
    set<int> st;
    st.insert(5);
    st.insert(1);
    st.insert(3);
    st.insert(3);

    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size of set: " << st.size() << endl;

    // To find some element in set
    // or use simply st.count(value) if it present it print 1 if not present it print 0
    auto it = st.find(3);
    if (it != st.end())
    {
        cout << *it << endl;
    }

    // Erase element
    st.erase(3);
    for (auto i : st)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int> st1;
    st1.insert(5);
    st1.insert(1);
    st1.insert(3);
    st1.insert(3);
    st1.insert(7);
    st1.insert(2);
    st1.insert(8);

    for (auto i : st1)
    {
        cout << i << " ";
    }
    cout << endl;

    // Erase using iterator
    auto it2 = st1.begin();
    it2++, it2++;
    auto it3 = st1.end();
    it3--;
    st1.erase(it2, it3); // it2 to it3-1 elements
    for (auto i : st1)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int> st2;
    st2.insert(1);
    st2.insert(5);
    st2.insert(3);
    st2.insert(3);
    st2.insert(7);
    st2.insert(20);
    st2.insert(8);

    // lower bound and upper bound
    // returns an iterator to the element which is >= value
    auto it4 = st2.lower_bound(5);
    cout << *it4 << endl;
    if (it4 == st2.end())
    {
        cout << "end";
    }

    // upper bound and upper bound
    // returns an iterator to the element which is > value
    auto it5 = st2.upper_bound(5);
    cout << *it5 << endl;
    if (it5 == st2.end())
    {
        cout << "end";
    }
}
int main()
{
    explainSet();
    return 0;
}