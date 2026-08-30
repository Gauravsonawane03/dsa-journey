#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[] = {1, -1, 5, -2, 3};
    int k = 3;
    int size = sizeof(arr) / sizeof(arr[0]);
     unordered_map<int, int> presum;
    int sum = 0;
    int maxLength = 0;
    presum[0] = -1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        int remaining = sum - k;
        if (presum.find(remaining) != presum.end())
        {
            int length = i - presum[remaining];
            maxLength = max(maxLength, length);
        }
        if (presum.find(sum) == presum.end())
        {
            presum[sum] = i;
        }
    }
    cout<<maxLength<<endl;
    return 0;
}