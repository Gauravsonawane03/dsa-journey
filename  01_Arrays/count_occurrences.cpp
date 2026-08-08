#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 7, 2, 7, 9, 7, 3};
    int x = 7;
    bool found = false;
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            found = true;
            count++;
        }
    }
    if (found)
    {
        cout << "Number of times X occured: " << count << endl;
    }
    else
        cout << "No element as such found." << endl;
    return 0;
     //time complexity = O(n) checking every element
    //space complexity = O(1)  because extra memory does not grow with input size.
}

