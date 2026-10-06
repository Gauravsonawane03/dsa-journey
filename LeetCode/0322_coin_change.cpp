#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n + 1, vector<int>(amount + 1, 1e9));
        dp[0][0] = 0; 
        for (int i = 1; i <= n; i++) {
            for (int target = 0; target <= amount; target++) {
                int notTake = dp[i - 1][target];
                int take = 1e9;
                if (coins[i - 1] <= target) {
                    take = 1 + dp[i][target - coins[i - 1]];
                }
                
                dp[i][target] = min(take, notTake);
            }
        }
        int ans = dp[n][amount];
        return ans >= 1e9 ? -1 : ans;
    }
};