#include <iostream>
using namespace std;

int main()
{
    int i;
    cin >> i;
    // do the job then check the condition satisfies and then again do the job.
    // dowhile loop runs atleast 1 time even if the condition isn't satisfies.
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 10);
    return 0;
}