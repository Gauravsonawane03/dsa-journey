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

void printIncreasing(int i, int n){
    if(n==0){
        return ;
    }
    printIncreasing(i-1,n-1);
    cout<<n<<endl;
}

void printDecreasing(int i, int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    printDecreasing(i-1,n-1);
}
void f(int i, int n) {
    if (i > n) return;

    f(i + 1, n);
    cout << i << " ";
}
int sumUpto(int n){
    if(n==0) return 0;
    int previousSum= sumUpto(n-1);
    return previousSum+n;
}
 int countDigits(int n){
    if(n==0) return 0;
    int count=countDigits(n/10)+1;
    return count;
}
void reverseString(string s, int i){
    if(i==s.length()){
        return ;
    }
    reverseString(s,i+1);
    cout << s[i] << " ";
}
int main(){
    // printDescending(5);
    // printAscending(5);
    // cout<<sum(5);
    // cout<<factorial(5);
    // printIncreasing(5,5);
    // printDecreasing(5,5);
    // f(1,5);
    // cout<<sumUpto(5);
    // cout<<countDigits(12345);
    reverseString("abcd",0);
    return 0;
}