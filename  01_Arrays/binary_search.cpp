#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>& nums, int target) {
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
    return -1;
}
int main(){
    vector<int> nums={1,3,7,9,12,16,18};
    int target=18;
    binarySearch(nums,target);
    return 0;
}