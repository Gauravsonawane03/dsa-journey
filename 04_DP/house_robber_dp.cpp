#include <iostream>
#include <vector>
using namespace std;
int house(int i, vector<int> &dp, vector<int> &nums)
{
    if (i == 0)
    {
        return nums[0];
    }
    if (i == 1)
    {
        return max(nums[0], nums[1]);
    }
    if (dp[i] != -1)
    {
        return dp[i];
    }
    dp[i - 1] = house(i - 1, dp, nums);
    dp[i - 2] = house(i - 2, dp, nums);
    dp[i] = max(dp[i - 1], nums[i] + dp[i - 2]);
    return dp[i];
}
int rob(vector<int>& nums, int n){
    if(n==0){
        return 0;
    }
        vector<int> dp(n,-1);
        return house(n-1,dp,nums);
}
int main(){
    vector<int> nums = {1, 2, 3, 1};
    // vector<int> nums = {};
    // vector<int> nums ={5};
    // vector<int> nums = {1, 2};
    int size=nums.size();
    cout<<rob(nums,size)<<endl;
}