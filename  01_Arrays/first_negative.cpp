#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 12, 16, -2, 6, -7};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool found = false;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            found = true;
            cout << "First Negative Found: " << arr[i];
            break;
        }
    }
    if (!found)
    {
        cout << "No negative found." << endl;
    }

    return 0;
    // Time Complexity: O(n)
    // In the worst case we may need to check every element.
    // Auxiliary Space: O(1)
    // Only a fixed number of variables are used.
}