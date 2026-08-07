#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 34, 53, 12, 33, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            index = i;
            cout << "First negative index: " << i << endl;
            break;
        }
    }
    if (index == -1)
    {
        cout << "No Negative index found." << endl;
    }
    return 0;
    // Time Complexity: O(n)
    // In the worst case we may need to check every element.
    // Auxiliary Space: O(1)
    // Only a fixed number of variables are used.
}