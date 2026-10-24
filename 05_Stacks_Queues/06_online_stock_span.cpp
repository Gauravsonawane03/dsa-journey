#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class StockSpanner{
public:
stack<pair<int,int>> st;
int index=-1;
    int next(int price) {
        index=index+1;
        while(!st.empty()&& st.top().first<=price){
            st.pop();
        }
        int ans;
        ans=index-(st.empty()?-1:st.top().second);
        st.push({price,index});
        return ans;
    }
};
int main(){
StockSpanner stockSpanner;

cout << stockSpanner.next(100) << " ";
cout << stockSpanner.next(80) << " ";
cout << stockSpanner.next(60) << " ";
cout << stockSpanner.next(70) << " ";
cout << stockSpanner.next(60) << " ";
cout << stockSpanner.next(75) << " ";
cout << stockSpanner.next(85) << "\n";
return 0;
}