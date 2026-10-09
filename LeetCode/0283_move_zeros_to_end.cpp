#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        int j=0;
        for(int i=0;i<size;i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        for(;j<size;j++){
            nums[j]=0;
        }
    for(int i=0;i<size;i++){
        cout<<nums[i]<<endl;
    }
    }
};
