#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int knapsack(vector<int> &weights, vector<int> &values, int capacity)
{
    int n = weights.size();
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));
    dp[0][capacity] = 0;
    dp[n][0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int w = 1; w <= capacity; w++)
        {
            if (weights[i - 1] <= w)
            {
                dp[i][w] = max(dp[i - 1][w], values[i - 1] + dp[i - 1][w - weights[i - 1]]);
            }
            else
            {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    return dp[n][capacity];
}
int main()
{
    vector<int> wieghts = {1, 3, 4};
    vector<int> values = {15, 20, 30};
    int capacity = 5;
    cout << knapsack(wieghts, values, capacity) << endl;
    return 0;
}