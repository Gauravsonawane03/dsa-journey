#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{   
    string str = "race a car";
    // string str = "A man, a plan, a canal: Panama";
    int size = str.size();
    int left = 0;
    int right = size - 1;
    bool isPalindrome = true;
    while (left < right)
    {
        while (!isalnum(str[left]))
        {
            left++;
        }

        while (!isalnum(str[right]))
        {
            right--;
        }

        if (tolower(str[left]) != tolower(str[right]))
        {
            isPalindrome = false;
            break;
        }
        else
        {
            left++;
            right--;
        }
    }
    if (isPalindrome)
    {
        cout << "Palindrome." << endl;
    }
    else
    {
        cout << "Not a palindrome." << endl;
    }
    // Time: O(n)
    // Extra space: O(1)
}