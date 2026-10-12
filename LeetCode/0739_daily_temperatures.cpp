#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size=temperatures.size();
       vector<int> answers(size,0);
        stack<int> st;
        for(int i=0;i<size;i++){
            while(!st.empty()&&temperatures[i]>temperatures[st.top()]){
                int prevDayindex=st.top();
                st.pop();
                answers[prevDayindex]=i-prevDayindex;
            }
            st.push(i);
        }
            return answers;
    }
};