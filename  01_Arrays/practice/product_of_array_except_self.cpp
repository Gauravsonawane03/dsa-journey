#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int answer[size-1];
    int leftproduct = 1;
    int rightproduct = 1;
    for (int i = 0; i < size; i++)
    {
        answer[i] = leftproduct;
        leftproduct *= arr[i];
    }
    for (int i = size - 1; i >= 0; i--)
    {
        answer[i] *= rightproduct;
        rightproduct *= arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << answer[i] << " ";
    }
    return 0;
}