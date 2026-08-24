#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> nums;
    // int arr[] = {100, 4, 200, 1, 3, 2};
    // int arr[]={9, 1, 4, 7, 3, -1, 0, 5, 8, -1, 6};
    int arr[] = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8};
    // int arr[]={5, 5, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int current = 0;
    int maxlength = 0;
    int length = 0;
    for (int i = 0; i < size; i++)
    {
        nums.insert(arr[i]);
    }
    for (int i = 0; i < size; i++)
    {

        if (nums.find(arr[i] - 1) == nums.end())
        {
            int current = arr[i];
            length = 1;
            while (nums.find(current + 1) != nums.end())
            {
                current++;
                length++;
            }
        }
        maxlength = max(maxlength, length);
    }
    cout << maxlength << endl;
    return 0;
}