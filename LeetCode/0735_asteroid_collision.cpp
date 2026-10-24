#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (int ast : asteroids) {
            while (!st.empty() && ast < 0 && st.top() > 0) {
                if (st.top() < -ast) {
                    st.pop();
                    continue; 
                } else if (st.top() == -ast) {
                    st.pop();
                }
                ast = 0; 
                break;
            }
            if (ast != 0) {
                st.push(ast);
            }
        }
        vector<int> result(st.size());
        for (int i = result.size() - 1; i >= 0; i--) {
            result[i] = st.top();
            st.pop();
        }
        
        return result;
    }
};
