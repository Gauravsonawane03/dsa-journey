#include<iostream>
using namespace std;
int main(){
      int arr[]={4, 7, 2, 9, 8, 5, 6};
        int size=sizeof(arr)/sizeof(arr[0]);
        int sum=0;
        for(int i=0;i<size;i++){
            if(arr[i]%2==0){
                sum+=arr[i];
            }
        }
        cout<<"Sum of Even Numbers in array: "<<sum<<endl;
        return 0;
        //time complexity = O(n) and space complexity = O(1).
}