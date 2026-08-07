#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, -2, 10, -8, 7, -15};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool found = false;
    int last_negative = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            found = true;
            last_negative = arr[i];
        }
    }
    if (found)
    {
        cout << "Last negative element is: " << last_negative << endl;
    }
    else if (!found)
    {
        cout << "No negative element." << endl;
    }
    return 0;
    // time complexity is O(n) because we need to check every element.
    // space complexity is O(1) because fixed number of elements are used.
}
