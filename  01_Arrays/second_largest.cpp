#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {12, 5, 8, 20, 3, 15, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int secondlargest = INT_MIN;

    for (int i = 0; i < size; i++) {

        if (arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest && arr[i] != largest) {
            secondlargest = arr[i];
        }
    }

    cout << "Largest Element: " << largest << endl;
    cout << "Second Largest: " << secondlargest << endl;

    return 0;
}