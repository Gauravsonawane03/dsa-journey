#include <iostream>
using namespace std;
int main()
{
    int arr[] = {20, 12, -22, 21, -8, 92};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            count++;
        }
    }
    cout << "Total Negative Numbers: " << count << endl;
    return 0;
    //time complexity O(n)
    //space complexity O(1)
}