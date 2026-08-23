#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    unordered_map<int, int> num;
    for (int i = 0; i < arr.size(); i++)
    {
        int needed = target - arr[i];
        if (num.find(needed) != num.end())
        {
            cout << num[needed] << " " << i << endl;
            return 0;
        }
        num[arr[i]] = i;
    }
    cout << "no match found" << endl;
    return 0;
}
