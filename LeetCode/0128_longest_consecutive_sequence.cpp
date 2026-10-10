#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> longest;
        int maxLength=0;
        int current=0;
        int length=0;
        for(int i=0;i<n;i++){
            longest.insert(nums[i]);
        }
        for(int x : longest){
            if(longest.find(x-1)==longest.end()){
                current=x;
                length=1;
                while(longest.find(current+1)!=longest.end()){
                    current++;
                    length++;
                }
            }
            maxLength=max(maxLength,length);
        }
        return maxLength;
    }
};