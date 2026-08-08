#include <iostream>
#include <climits>
using namespace std;
int main()
{   
    int arr[] = {9, 4, 7, 2, 6};
    // int arr[] = {-5, -8, -2, -10};
    // int arr[] = {-5, 8, 3, -2, 1, 10, -7};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool found = false;
    int smallest_positive = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0 && arr[i] < smallest_positive)
        {
            found = true;
            smallest_positive = arr[i];
        }
    }
    if (found == false)
    {
        cout << "No positive element found." << endl;
    }
    else
        cout << "Smallest postive element is " << smallest_positive << "." << endl;
    return 0;
    // time complexity = O(n) checking every element
    // space complexity = O(1)  because extra memory does not grow with input size.
}