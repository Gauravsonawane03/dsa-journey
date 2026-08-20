#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={1,2,3,-2,5,1};
    unordered_map<int, int> freq;
    int size=sizeof(nums);
    int target=5;
    freq[0]=1;
    int currentSum=0;
    int needed=0;
    int count=0;
    for(int i=0;i<size;i++){
       currentSum+=nums[i];
       needed=currentSum-target;
       count += freq[needed];
       freq[currentSum]++;
    }
     cout << count << endl;
}