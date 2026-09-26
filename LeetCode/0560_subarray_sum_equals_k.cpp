#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int size=nums.size();
        freq[0]=1;
        int currentSum=0;
        int needed=0;
        int count=0;
        for(int i=0;i<size;i++){
            currentSum+=nums[i];
            needed=currentSum-k;
            count += freq[needed];
            freq[currentSum]++;
        }
        return count;
    }
};