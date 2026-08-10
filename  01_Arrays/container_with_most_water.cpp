#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = size - 1;
    int maxArea = 0;
    while (left < right)
    {
        int hieght = min(arr[left], arr[right]);
        int width = right - left;
        int area = hieght * width;
        if (area > maxArea)
        {
            maxArea = area;
        }
        else if (arr[left] < arr[right])
        {
            left++;
        }
        else if (arr[left] > arr[right])
        {
            right--;
        }
        else
        {
            left++;
        }
    }
    cout << "Maximum area = " << maxArea << endl;
    return 0;
    // Time: O(n)
    // Extra space: O(1)
}