#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 2, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool notSorted = false;
    for (int i = 0; i < size-1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            notSorted = true;
            break;
        }
    }
    if (notSorted)
    {
        cout << "Array is Not sorted in Non-decreasing order." << endl;
    }
    else
        cout << "Array is sorted in Non-decreasing order." << endl;
    return 0;
    // time complexity = O(n) checking every element
    // space complexity = O(1)  because extra memory does not grow with input size.
}