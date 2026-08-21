#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    // vector<int> nums={1,2,3};
    int size = nums.size();
    int totalSum = 0;
    for (int i = 0; i < size; i++)
    {
        totalSum += nums[i];
    }

    int leftSum = 0;
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum)
        {
            found = true;
            cout << "Pivot Index: " << i << endl;
        }
        leftSum += nums[i];
    }
    if (!found)
    {
        cout << "No Pivot Found." << endl;
    }
    return 0;
}
