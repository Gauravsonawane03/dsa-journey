#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {7, 2, 9, 5, 9, 6};
    // vector<int> arr={5,5,5,5};
    int size=arr.size();
    int largest=arr[0];
    int secondlargest=INT_MIN;
    for(int i=1;i<size;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }else if(arr[i]<largest && arr[i]>secondlargest){
            secondlargest=arr[i];
        }
    }
    if(secondlargest==INT_MIN){
        cout<<"No second largest element exists."<<endl;
    }else{
         cout<<"SECOND LARGEST ELEMENT: "<<secondlargest<<endl;
    }
    return 0;
}
