#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> longest;
    // int arr[] = {100, 4, 200, 1, 3, 2};
    // int arr[] = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    int arr[] = {1, 1, 2, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int current = 0;
    int length = 0;
    int maxLength = 0;
    for (int i = 0; i < size; i++)
    {
        longest.insert(arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (longest.find(arr[i] - 1) == longest.end())
        {
            int current = arr[i];
            length = 1;
            while (longest.find(current + 1) != longest.end())
            {
                current++;
                length++;
            }
        }
        maxLength = max(maxLength, length);
    }
    cout << maxLength << endl;
    return 0;
}
