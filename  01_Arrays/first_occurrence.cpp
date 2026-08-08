#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 7, 2, 7, 9, 7, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            index = i;
            break;
        }
    }
    if (index >= 0)
    {
        cout << "Number occured on the index first: " << index << endl;
    }
    else
        cout << "Number didnt occured." << endl;
    return 0;
}