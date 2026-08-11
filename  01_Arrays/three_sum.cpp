#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {-2, 0, 0, 2, 2, -1, 1};
    // int arr[] = {0, 0, 0, 0};
    // int arr[] = {-1, 0, 1, 2, -1, -4};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size);
    for (int i = 0; i < size; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            continue;
        }
        int left = i + 1;
        int right = size - 1;
        while (left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum < 0)
            {
                left++;
            }
            else if (sum > 0)
            {
                right--;
            }
            else if (sum == 0)
            {
                cout << arr[i] << "+" << arr[left] << "+" << arr[right] << "=" << sum << endl;
                left++;
                right--;
                while (left < right && arr[left] == arr[left - 1])
                {
                    left++;
                }

                while (left < right && arr[right] == arr[right + 1])
                {
                    right--;
                }
            }
        }
    }
    return 0;
    // Time: O(n^2)
    // Extra space: O(1)
}