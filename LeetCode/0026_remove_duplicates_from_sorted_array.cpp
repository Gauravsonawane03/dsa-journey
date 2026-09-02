#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
    int j = 0;
    for (int i = 1; i < size; i++)
    {
        if (nums[i] != nums[j])
        {
            nums[j + 1] = nums[i];
            j++;
        }
    }
    if (nums.size() != 0)
    {
        return j + 1;
    }
    return 0;
        
    }
};