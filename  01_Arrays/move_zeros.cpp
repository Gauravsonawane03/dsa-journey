#include <iostream>
using namespace std;
int main()
{   
    // int arr[]={0, 1, 2, 3, 4};
    // int arr[]={1, 0, 2, 0, 3};
    // int arr[]={0, 0, 0, 0};
    // int arr[]={1, 2, 3, 4};
    // int arr[]={1, 0, 0, 0, 2};
    int arr[] = {0, 1, 0, 3, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }
    for (; j < size; j++)
    {
        arr[j] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}