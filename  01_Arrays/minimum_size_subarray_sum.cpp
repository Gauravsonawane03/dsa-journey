#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 1, 1, 1};
    // int arr[] = {2, 3, 1, 2, 4, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    int left = 0;
    int sum = 0;
    int minLength = size + 1;
    for (int right = 0; right < size; right++)
    {
        sum += arr[right];
        while (sum >= target)
        {
            int length = right - left + 1;
            if (length < minLength)
            {
                minLength = length;
            }
            sum -= arr[left];
            left++;
        }
    }
    if (minLength > size)
    {
        cout << "No valid subarray." << endl;
    }
    else
    {
        cout << minLength << endl;
    }
    return 0;
    // Time: O(n)
    //Extra space: O(1)
}