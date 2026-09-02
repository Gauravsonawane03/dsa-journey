#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
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
int main()
{
    // vector<int> nums = {1, 1, 2, 2, 3};
    // vector<int> nums = {1, 1, 1, 1};
    vector<int> nums = {};

    int k = removeDuplicates(nums);

    cout << k << endl;
    for (int i = 0; i < k; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}