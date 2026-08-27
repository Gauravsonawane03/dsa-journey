#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
    unordered_map<int, int> twosum;
    // vector<int> nums = {2, 7, 11, 15};
    // int target = 9;
    // vector<int> nums = {3, 3};
    // int target = 6;
    // vector<int> nums = {3, 1, 7, 2};
    // int target = 9;
    vector<int> nums = {1, 2, 3};
    int target = 10;
    int size = nums.size();
    int complement = 0;
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        complement = target - nums[i];
        if (twosum.find(complement) != twosum.end())
        {
            found = true;
        }
        twosum[nums[i]] = i;
    }
    if (found)
    {
        cout << "Pair exists." << endl;
    }
    else
        cout << "No pair exists." << endl;
    return 0;
}