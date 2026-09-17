#include <iostream>
#include <vector>
using namespace std;
bool solve(int i, vector<int> nums, int sum, int k)
{
    if (i == nums.size())
    {
        return sum == k;
    }
    bool take = solve(i + 1, nums, sum + nums[i], k);
    if (take)
    {
        return true;
    }
    bool skip = solve(i + 1, nums, sum, k);
    if (skip)
    {
        return true;
    }

    return false;
}
int main()
{
    int target = 10;
    vector<int> nums = {1, 2, 1};
    cout<<solve(0, nums, 0, target);
}
