#include <iostream>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxArea = 0;
        int n = heights.size();

        for (int i = 0; i <= n; i++) {
            int currHeight = (i == n) ? 0 : heights[i];

            while (!st.empty() && currHeight < heights[st.top()]) {
                int j = st.top();
                st.pop();

                int height = heights[j];
                int nse = i;
                int pse = st.empty() ? -1 : st.top();

                int width = nse - pse - 1;
                int area = height * width;

                maxArea = max(maxArea, area);
            }

            if (i < n) {
                st.push(i);
            }
        }

        return maxArea;
    }
};