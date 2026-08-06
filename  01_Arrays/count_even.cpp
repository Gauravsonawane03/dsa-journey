#include<iostream>
using namespace std;
int main(){
    int arr[]={3,8,12,5,7,10,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    cout<<"total Even Numbers: "<<count<<endl;
    return 0;
    //time complexity= O(n) and space complexity = O(1).
}