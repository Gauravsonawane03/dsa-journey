#include<iostream>
#include<vector>
using namespace std;
int lowerBound(vector<int>& nums, int target){
    int low=0;
    int high=nums.size()-1;
    int mid=0;
    while(low<=high){
        mid=low+(high-low)/2;
        if(nums[mid] >= target){
            high=mid-1;
        }
        if(nums[mid] < target){
            low = mid + 1;
        }
    }
    return low;
}
int main(){
    vector<int> nums={1, 3, 5, 7, 9, 11};
    int target=6;
    cout<<lowerBound(nums,target)<<endl;
    return 0;
}
