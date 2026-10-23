#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> Next_greater(vector<int>& nums){
    int n=nums.size();
    vector<int> nge(n,-1);
    stack<int> st;
    for(int i=2*n-1;i>=0;--i){
        while(!st.empty() && st.top()<=nums[i%n]){
            st.pop();
        }
         if(i<n){
                nge[i]=st.empty()?-1:st.top();
            }
        st.push(nums[i%n]);
    }
    return nge;
}
int main(){
    // vector<int> nums={5};
    // vector<int> nums={5, 4, 3, 2};
    vector<int> nums={1, 2, 1};
    vector<int> ans;
    ans=Next_greater(nums);
     for(int num:ans){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}