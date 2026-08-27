#include <iostream>
#include <vector>
#include<climits>
using namespace std;
int main()
{
    vector<int> nums = {2, 1, 5, 1, 3, 2};
    int k = 3;
    int left = 0;
    int windowSum = 0;
    int maxSum = INT_MIN;
    for (int right = 0; right < nums.size(); right++)
    {
        windowSum += nums[right];
        if (right - left + 1 == k)
        {
            maxSum = max(maxSum, windowSum);
            windowSum -= nums[left];
            left++;
        }
    }
    cout << maxSum << endl;
    return 0;
}
