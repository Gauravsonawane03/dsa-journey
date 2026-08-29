#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, -2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;
    unordered_map<int, int> freq;
    int sum = 0;
    int count = 0;
    freq[0] = 1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        int rem = sum - target;
        if (freq.find(rem) != freq.end())
        {
            count += freq[rem];
        }
        freq[sum]++;
    }
    cout << count << endl;
    return 0;
}