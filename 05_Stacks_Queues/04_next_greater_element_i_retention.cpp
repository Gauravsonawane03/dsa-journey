#include<iostream>
#include<vector>
#include<unordered_map>
#include<stack>
using namespace std;
vector<int> nextGreaterElement(vector<int> num1,vector<int> num2){
    unordered_map<int,int> Ng;
    stack<int> st;
    for(int i=num2.size()-1;i>=0;--i){
        int num=num2[i];
        while(!st.empty()&&st.top()<=num){
            st.pop();
        }
        if(st.empty()){
            Ng[num]=-1;
        }else{
            Ng[num]=st.top();
        }
        st.push(num);
    }
    vector<int> ans;
    for(int num:num1){
        ans.push_back(Ng[num]);
    }
    return ans;
}
int main(){
    vector<int> num1={4,1,2};
    vector<int> num2={1,3,4,2};
    vector<int> ans;
    ans=nextGreaterElement(num1,num2);
    for(int num:ans){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}
