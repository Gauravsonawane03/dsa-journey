#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> seen;
        int n=nums.size();
        int currentSum=0;
        int maxLength=0;
        seen[0]=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
            if(nums[i]==1){
                nums[i]=+1;
            }
            currentSum+=nums[i];
            if(seen.find(currentSum)!=seen.end()){
                maxLength=max(maxLength,i-seen[currentSum]);
            }
            else{
                seen[currentSum]=i;
            }
        }
        return maxLength;
    }
};