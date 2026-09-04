#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int mid = 0;

        int firstanswer = -1;
        int lastanswer = -1;

        // Find first occurrence
        while (low <= high) {
            mid = low + (high - low) / 2;

            if (target == nums[mid]) {
                firstanswer = mid;
                high = mid - 1;
            }
            else if (target > nums[mid]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        low = 0;
        high = nums.size() - 1;

        // Find last occurrence
        while (low <= high) {
            mid = low + (high - low) / 2;

            if (target == nums[mid]) {
                lastanswer = mid;
                low = mid + 1;
            }
            else if (target > nums[mid]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return {firstanswer, lastanswer};
    }
};
