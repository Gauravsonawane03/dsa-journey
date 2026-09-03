#include<iostream>
#include<vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    int mid=0;
    while (low <= high) {
     mid=low+(high-low)/2;
        if(target==nums[mid]){
            cout<<"target found at: "<<mid<<endl;
            return mid;
        }
        else if(target<nums[mid]){
            high=mid-1;
        }
        else if(target>nums[mid]){
            low=mid+1;
        }
    }
    return low;
}
int main(){
    vector<int> nums={1,3,5,9,11};
    int target=0;
    cout<<searchInsert(nums,target)<<endl;
    return 0;
}