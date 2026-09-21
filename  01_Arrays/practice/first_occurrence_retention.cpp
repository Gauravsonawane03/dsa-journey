#include<iostream>
#include<vector>
using namespace std;
int firstOccurrence1(const vector<int> nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    int mid = 0;
    int answer = -1; 
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (target == nums[mid])
        {
            answer = mid;
            high = mid - 1;
        }
        else if (target < nums[mid])
        {
            high = mid - 1;
        }
        else if (target > nums[mid])
        {
            low = mid + 1;
        }
    }
    return answer;
}

int main()
{
    // vector<int> nums = {1, 2, 4, 4, 4, 7, 9};
    // int target = 1;
    vector<int> nums = {1, 2, 2, 2, 4, 7, 9};
    int target = 2;
    cout << firstOccurrence1(nums, target) << endl;
    return 0;
}