#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string s, int left, int right)
{
    if (left >= right)
    {
        return true;
    }
    if (s[left] != s[right])
    {
        return false;
    }
    left++;
    right--;
    return isPalindrome(s,left,right);
}

int main()
{
    string s = "hello";
    int size = s.size();
    cout<<isPalindrome(s, 0, size - 1);
    return 0;
}