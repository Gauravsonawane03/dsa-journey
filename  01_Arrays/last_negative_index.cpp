#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, -2, 10, -8, 7, -15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int last_negative_index = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            last_negative_index = i;
        }
    }
    if (last_negative_index == -1)
    {
        cout << "No negative element found." << endl;
    }
    else if (last_negative_index >= 0)
    {
        cout << "last negative Index is: " << last_negative_index << endl;
    }
    return 0;
    // time complexity is O(n) because we need to check every element.
    // space complexity is O(1)because fixed numbers of elements are used.
}