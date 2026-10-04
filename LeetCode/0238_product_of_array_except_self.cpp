#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size=nums.size();
        vector<int> answer(nums.size());
        int leftProduct=1;
        int rightProduct=1;
        for(int i=0; i<size ; i++){
            answer[i]=leftProduct;
            leftProduct*=nums[i];
        }
        for(int i=size-1; i>=0; i--){
            answer[i]*=rightProduct;
            rightProduct*=nums[i];
        }
        return answer;
    }
};
