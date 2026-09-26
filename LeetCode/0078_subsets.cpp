#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
        void solve(int index,vector<int>& current,vector<vector<int>>& ans,vector<int>& nums){
            if(index==nums.size()){
                ans.push_back(current);
                return;
            }
            current.push_back(nums[index]);
            solve(index + 1, current, ans, nums);
            current.pop_back();
            solve(index+1,current,ans,nums);
     }       
    vector<vector<int>> subsets(vector<int>& nums) {
            vector<int> current;
            vector<vector<int>> ans;
            solve(0, current, ans, nums);
            return ans;
    }
};
