#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int arr[]={1, 2, 3, 1, 2, 3, 4};
    int size=sizeof(arr)/sizeof(arr[0]);
    unordered_set<int> window;
    int left=0;
    int maxLength=0;
    for(int right=0;right<size;right++){
        while(window.count(arr[right])){
             window.erase(arr[left]);
             left++;
        }
        window.insert(arr[right]);
        maxLength=max(maxLength,right-left+1);
        }
        cout<<maxLength<<endl;
        return 0;
    }
