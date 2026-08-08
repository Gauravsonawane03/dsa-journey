#include <iostream>
using namespace std;
int main()
{
    // int arr[]={3,1};
    int arr[] = {1, 1, 1, 1, 1, 1};
    // int arr[] = {7, 3, 5, 1, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool found = false;
    int smallest = INT_MAX;
    int second_smallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            if (smallest != INT_MAX)
            {
                found = true;
            }

            second_smallest = smallest;
            smallest = arr[i];
        }
    
    else if (arr[i] < second_smallest && arr[i] != smallest)
    {
        second_smallest = arr[i];
    }
}
cout << "Smallest Element is: " << smallest << endl;
if (found)
{
    cout << "Second smallest element is: " << second_smallest << endl;
}
else
    cout << "No distinct second smallest element found." << endl;

    
return 0;
// time complexity = O(n) checking every element
// space complexity = O(1)  because extra memory does not grow with input size.
}