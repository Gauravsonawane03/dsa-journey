#include <iostream>
#include <vector>
using namespace std;
int solve(int i, vector<int> nums, int sum, int k)
{
    if (i == nums.size())
    {
        return (sum == k) ? 1 : 0;
    }
    int take = solve(i + 1, nums, sum + nums[i], k);
    int skip = solve(i + 1, nums, sum, k);
    return take + skip;
}
int main()
{
    const vector<int> nums = {1, 2, 1};
    int k = 2;
    cout << solve(0, nums, 0, k);
    return 0;
}