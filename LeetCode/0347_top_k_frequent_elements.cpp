#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int ,int> count;
        for(int num: nums){
            count[num]++;
        }
        int n=nums.size();
        vector<vector<int>> buckets(n+1);
        for(auto& pair : count){
            buckets[pair.second].push_back(pair.first);
        }
        vector<int> result;
        for(int i=n;i>=0;i--){
            for(int num : buckets[i]){
                result.push_back(num);
                  if (result.size() == k) {
                    return result;
                }
            }
        }
        return result;
    }
};