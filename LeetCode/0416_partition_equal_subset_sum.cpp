#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int total = 0;
        for(int x:nums){
            total+=x;
        }
        if(total % 2 !=0){
            return false;
        }
        int target = total / 2;
        vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));
        dp[0][0]=true;
        for(int i=1;i<=n;i++){
            for(int w=1;w<=target;w++){
                if(nums[i-1]<=w){
                    dp[i][w]=dp[i-1][w]|| dp[i-1][w-nums[i-1]];
                }else{
                    dp[i][w]=dp[i-1][w];
                }
            }
        }
        return dp[n][target];
    }
};