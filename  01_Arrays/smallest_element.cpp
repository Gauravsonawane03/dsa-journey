#include<iostream>
using namespace std;
int main(){
    int arr[6] = {18, 6, 25, -3, 11, 2};
    int smallest=arr[0];
     for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
     }
     cout<<"Smallest Element: "<<smallest<<endl;
     return 0;
}