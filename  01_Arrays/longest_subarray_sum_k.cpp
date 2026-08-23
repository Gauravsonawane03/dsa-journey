#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    // int arr[] = {3, 4, -2, 1, 6, -3, 2};
    // int arr[] = {5};
    // int arr[]={1,-1,1,-1};
    // int arr[]={2,3,-2,2,3};
    int arr[]={1,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 10;
    unordered_map<int, int> presum;
    int sum = 0;
    int maxLength = 0;
    presum[0] = -1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        // if (sum == k)
        // {
        //     maxLength = max(maxLength, i + 1);
        // }
        int remaining = sum - k;
        if (presum.find(remaining) != presum.end())
        {
            int length = i - presum[remaining];
            maxLength = max(maxLength, length);
        }
        if (presum.find(sum) == presum.end())
        {
            presum[sum] = i;
        }
    }
    cout<<maxLength<<endl;
    return 0;
}