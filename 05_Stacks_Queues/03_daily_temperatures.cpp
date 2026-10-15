#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> dailyTemperatures(vector<int> &temperatures)
{
    int size = temperatures.size();
    vector<int> answers(size, 0);
    stack<int> st;
    for (int i = 0; i < size; i++)
    {
        while (!st.empty() && temperatures[i] > temperatures[st.top()])
        {
            int prevDayindex = st.top();
            st.pop();
            answers[prevDayindex] = i - prevDayindex;
        }
        st.push(i);
    }
    for(int i=0;i<size;i++){
    cout<< answers[i]<<endl;
    }
    return answers;
}
int main(){
    vector<int>temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    int size=temperatures.size();
    dailyTemperatures(temperatures);
    return 0;
}