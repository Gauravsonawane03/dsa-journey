#include <iostream>
using namespace std;
int main()
{   
    // int arr[] = {1, 2, 3, 4, 5};
    // int arr[] = {1, 1, 1, 1, 1};
    int arr[] = {1, 1, 2, 2, 3, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int j = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[j] = arr[i];
            j++;
        }
    }
    for (int k = 0; k < j; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
    // Time: O(n)
    //Extra space: O(1)
}
