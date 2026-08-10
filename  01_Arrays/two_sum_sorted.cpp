#include <iostream>
using namespace std;

// old implementation here
// int main()
// {

//     int arr[] = {1, 2, 3, 4, 6, 8, 11};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target = 10;
//     int left = 0;
//     int right = size - 1;
//     while (left < right)
//     {
//         int sum = arr[left] + arr[right];
//         cout << "left: " << left << " right: " << right << " sum: " << sum << endl;
//         if (sum < target)
//         {
//             left++;
//         }
//         else if (sum > target)
//         {
//             right--;
//             cout << "RIGHT MOVED TO: " << right << endl;
//         }
//         else if (sum == target)
//         {
//             cout << arr[left] << "+" << arr[right] << "=" << sum;
//             break;
//         }
//     }

//     return 0;
// }

// version 2

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 8, 11};
    // int arr[]={2,4,5,7,9,12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    // int target=20;
    int left = 0;
    int right = size - 1;
    bool found = false;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum < target)
        {
            left++;
        }
        else if (sum > target)
        {
            right--;
        }
        else if (sum == target)
        {
            found = true;
            cout << arr[left] << "+" << arr[right] << "=" << sum << endl;
            break;
        }
    }
    if (found == false)
    {
        cout << "No pair exists." << endl;
    }
    return 0;
}