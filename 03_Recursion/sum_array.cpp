#include <iostream>
#include <vector>
using namespace std;
int sumOfarray(vector<int> &arr, int i)
{
    if (i == arr.size())
    {
        return 0;
    }
    int sum = sumOfarray(arr, i + 1);
    return arr[i] + sum;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << sumOfarray(arr, 0);
    return 0;
}
