#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> seen;
        int size=nums.size();
        int currentSum=0;
        int Maxlength=0;
        seen[0]=-1;
        for(int i=0;i<size;i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
            if(nums[i]==1){
                nums[i]=+1;
            }
            currentSum+=nums[i];
            if(seen.find(currentSum) != seen.end()){
                Maxlength=max(Maxlength,i-seen[currentSum]);
            }
            else{
                seen[currentSum]=i;
            }
        }
        return Maxlength;
    }
};