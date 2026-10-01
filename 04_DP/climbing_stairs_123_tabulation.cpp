#include<iostream>
#include<vector>
using namespace std;
int climb(int n){
    if(n==0)return 1;
    if(n==1)return 1;
    if(n==2)return 2;
    vector<int> dp(n+1);
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    return dp[n];
}
int main(){
    cout<<climb(0)<<endl;
    cout<<climb(1)<<endl;
    cout<<climb(2)<<endl;
    cout<<climb(3)<<endl;
    cout<<climb(4)<<endl;
    cout<<climb(5)<<endl;
    return 0;
}
