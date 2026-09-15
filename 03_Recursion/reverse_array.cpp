#include<iostream>
#include<vector>

using namespace std;
void reverseArray(vector<int>& arr,int left,int right){
    if(left>=right){
        return ;
    }
    swap(arr[left],arr[right]);
    left++;
    right--;
    reverseArray(arr,left,right);
}
int main(){
    vector<int> arr={1,2,3,4,5};
    int size=arr.size();
    reverseArray(arr,0,size-1);
    for (int x : arr) {
    cout << x << " ";
}
}