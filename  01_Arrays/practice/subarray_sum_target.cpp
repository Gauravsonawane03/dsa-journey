#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
     vector<int> nums = {3, 4, -2, 5, 1, -3, 2};
     int size=nums.size();
    int target = 5;
    unordered_map<int, int> presum;
    int sum = 0;
    int maxLength = 0;
    presum[0] = -1;
    for (int i = 0; i < size; i++)
    {
        sum += nums[i];
        int remaining = sum - target;
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