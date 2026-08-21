#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
    unordered_map<int, int> firstseen;
    vector<int> nums = {15, -2, 2, -8, 1, 7, 10, 23};
    int size = nums.size();
    int currentsum = 0;
    firstseen[0] = -1;
    int maxlength = 0;
    for (int i = 0; i < size; i++)
    {
        currentsum += nums[i];
        if (firstseen.find(currentsum) != firstseen.end())
        {
            maxlength = max(maxlength, i - firstseen[currentsum]);
        }
        else
        {
            firstseen[currentsum] = i;
        }
    }
    cout << maxlength << endl;
    return 0;
}
