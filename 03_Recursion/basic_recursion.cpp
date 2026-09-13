#include<iostream>
using namespace std;
void printDescending(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    printDescending(n-1);
}

 void printAscending(int n){
    if(n==0){
        return;
    }
    printAscending(n-1);
    cout<<n<<endl;
 }

int sum(int n){
    if(n==0){
        return 0;
    }
    int previousSum = sum(n-1);
    return previousSum+n;
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    return factorial(n - 1) * n;
}
int main(){
    // printDescending(5);
    // printAscending(5);
    // cout<<sum(5);
    cout<<factorial(5);
    return 0;
}