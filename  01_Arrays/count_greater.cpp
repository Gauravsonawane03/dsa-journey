#include<iostream>
using namespace std;
int main(){
    int arr[]={4,12,7,20,3,15,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x=10;
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<"total elements greater than X: "<<count<<endl;
    return 0;
    //time complexity = O(n) checking every element
    //space complexity = O(1)  because extra memory does not grow with input size.
}