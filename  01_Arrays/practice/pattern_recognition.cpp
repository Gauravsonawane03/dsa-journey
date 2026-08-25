#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    // int arr[] = {1, 2, 3, 1, 4, 5, 2, 6};
    int arr[]={1,1,1,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    unordered_set<int> nums;
    
    int length=0;
    int maxlength=0;
    int left=0;
    for(int right=0;right<size;right++){
        
        while (nums.count(arr[right])==1)
        {
            nums.erase(arr[left]);
            left++;
        }
        nums.insert(arr[right]);
        length=right-left+1;
        
        maxlength=max(maxlength,length);
    }
cout<<maxlength<<endl;
    return 0;
}
