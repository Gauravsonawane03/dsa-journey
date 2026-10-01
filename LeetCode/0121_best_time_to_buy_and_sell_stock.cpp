#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 0; i < prices.size(); i++) {
            int profitToday = prices[i] - minPrice;
            maxProfit = max(maxProfit, profitToday);
            minPrice = min(minPrice, prices[i]);
        }

        return maxProfit;
    }
};