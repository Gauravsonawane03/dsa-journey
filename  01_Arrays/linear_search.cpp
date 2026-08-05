#include<iostream>
using namespace std;
int main(){
    int arr[6] = {12, 5, 8, 21, 3, 17};
    // int target =21;
    int target = 100;
    bool found=false;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]==target){
            found=true;
            cout<<"Target Found at index: "<<i<<endl;
            break;
        }
    }if(!found){
    cout<<"Target not found."<<endl;
}
    return 0;
}