#include <iostream>
using namespace std;
#include <unordered_map>
int main()
{
    unordered_map<int, int> seen;
    int arr[] = {0, 0, 1, 0, 0, 0, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int currentsum = 0;
    int maxlength = 0;
    seen[0] = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = -1;
        }
        if (arr[i] == 1)
        {
            arr[i] = +1;
        }
        currentsum += arr[i];
        if (seen.find(currentsum) != seen.end())
        {
            maxlength = max(maxlength, i - seen[currentsum]);
        }
        else
        {
            seen[currentsum] = i;
        }
    }
    cout << maxlength << endl;
}