#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<int, int> freq;
    vector<int> nums = {5, 2, 5, 3, 2, 5, 3};
    for (auto it = nums.begin(); it != nums.end(); it++)
    {
        freq[*it]++;
    }
    for (auto it = freq.begin(); it != freq.end(); it++)
    {
        cout << it->first << " : " << it->second << endl;
    }
    return 0;
} 