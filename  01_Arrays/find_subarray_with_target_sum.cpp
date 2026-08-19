#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int k = 7;
    // int arr[] = {1, 4, 2, 3, 5};
    // int k = 9;
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int left = 0;
    bool found = false;

    for (int right = 0; right < size; right++)
    {
        sum += arr[right];

        while (sum > k)
        {
            sum -= arr[left];
            left++;
        }

        if (sum == k)
        {
            found = true;
            cout << "Found the subarray." << endl;
            break;
        }
    }

    if (found == false)
    {
        cout << "No subarray found." << endl;
    }
}