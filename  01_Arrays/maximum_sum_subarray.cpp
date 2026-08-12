#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-5, -2, -8, -1, -3};
    // int arr[]={2,1,5,1,3,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    //  int k=3;
    int k = 2;
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    int maxSum = sum;
    int left = 0;
    int right = k;
    while (right < size)
    {
        sum = sum - arr[left] + arr[right];
        left++;
        right++;
        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }
    cout << maxSum << endl;
    // First window: O(k)
    // Sliding: O(n-k)
    // Total: O(n)
    // Extra space: O(1)
    return 0;
}