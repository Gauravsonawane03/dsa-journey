#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[] = {2, 3, 1, 2, 4, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    int left = 0;
    int sum = 0;
    int minlength = INT_MAX;
    for (int right = 0; right < size; right++)
    {
        sum += arr[right];
        while (sum >= target)
        {
            {
                int length = right - left + 1;
                if (length < minlength)
                {
                    minlength = length;
                }
                sum -= arr[left];
                left++;
            }
        }
    }
    if (minlength > size)
    {
        cout << "No valid subarray." << endl;
    }
    else
    {
        cout << minlength << endl;
    }
    return 0;
}