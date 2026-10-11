#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int size = nums.size();
        int totalSum = 0;
        for (int i = 0; i < size; i++)
        {
            totalSum += nums[i];
        }
        int leftSum = 0;
        for (int i = 0; i < size; i++)
        {
            int rightSum = totalSum - leftSum - nums[i];
            if (leftSum == rightSum)
            {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};