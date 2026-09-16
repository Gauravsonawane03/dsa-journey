#include <iostream>
#include <vector>
using namespace std;
vector<int> arr = {1, 2, 1};
void subsequences(int i, vector<int> &current, int sum, int k)
{
    if (i == arr.size())
    {
        if (sum == k)
        {
            for (auto elements : current)
            {
                cout << elements << " ";
            }
            cout<<endl;
        }
        return;
    }
    current.push_back(arr[i]);
    subsequences(i+1,current,sum+arr[i],k);

    current.pop_back();

    subsequences(i+1,current,sum,k);
}
int main(){
    int target=2;
    vector<int> current;
    subsequences(0,current,0,target);
}
