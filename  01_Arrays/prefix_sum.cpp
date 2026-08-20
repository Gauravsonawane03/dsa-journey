#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {2, 4, 1, 3, 5};
    vector<int> prefix(5);
    int sum = 0;
    int index = 0;
    for (auto it = nums.begin(); it != nums.end(); it++)
    {
        sum = sum + *it;
        prefix[index] = sum;
        index++;
    }
    for (auto it = prefix.begin(); it != prefix.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}
