#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {2, 4, 1, 3, 5};
    vector<int> prefix(5);
    int sum = 0;
    int index = 0;
    int left1 = 1, right1 = 3;
    int left2 = 0, right2 = 3;
    int left3 = 2, right3 = 4;
    for (auto it = nums.begin(); it != nums.end(); it++)
    {
        sum = sum + *it;
        prefix[index] = sum;
        index++;
    }
    for (auto it = prefix.begin(); it != prefix.end(); it++)
    {
        if (left3 == 0)
        {
            sum = prefix[right3];
            cout <<"Query sum: "<< sum << endl;
            break;
        }
        else
        {
            sum = prefix[right3] - prefix[left3 - 1];
            cout << "Query sum : " << sum << endl;
            break;
        }
    }
    return 0;
}
// query 1: left = 1, right = 3
//  query 2: left = 0, right = 3
//  query 3: left = 2, right = 4