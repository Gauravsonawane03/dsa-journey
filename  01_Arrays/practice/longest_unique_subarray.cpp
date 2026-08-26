#include <iostream>
#include <climits>
#include <unordered_set>
using namespace std;
int main()
{
    // vector<int> nums = {2, 3, 1, 2, 4, 3};
    // vector<int> nums = {1, 2, 3, 4, 5};
    // vector<int> nums = {1, 1, 1, 1};
    vector<int> nums = {1, 2, 1, 3, 4, 3, 5};
    int size = nums.size();
    unordered_set<int> longest;
    int left = 0;
    int length = 0;
    int maxLength = 0;
    for (int right = 0; right < size; right++)
    {
        while (longest.find(nums[right]) != longest.end())
        {
            longest.erase(nums[left]);
            left++;
        }
        longest.insert(nums[right]);
        length = right - left + 1;

        maxLength = max(maxLength, length);
    }
    cout << maxLength << endl;
    return 0;
}
