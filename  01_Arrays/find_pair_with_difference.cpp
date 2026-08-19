#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 7, 10};
    int k = 6;
    int size = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = 1;
    bool found = false;
    while (i < j && j < size)
    {
        int difference = arr[j] - arr[i];
        if (difference < k)
        {
            j++;
        }
        else if (difference > k)
        {
            i++;
        }
        else if (difference == k)
        {
            found = true;
            cout << "found the pair." << endl;
            break;
        }
    }
    if (found == false)
    {
        cout << "no pair found." << endl;
    }
    return 0;
    // time complexity: O(n) and space complexity: O(1).
}