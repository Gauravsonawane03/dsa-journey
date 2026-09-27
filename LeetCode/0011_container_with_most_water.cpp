#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height){
        int size=height.size();
        int left=0;
        int right=size-1;
        int Maxarea=0;
        while(left<right){
            int width=right-left;
            int Height=min(height[left],height[right]);
            int area = Height*width;
            if(area>Maxarea){
                Maxarea=area;
            }
            if(height[right]<height[left]){
                right--;
            }else if(height[left]<height[right]){
                left++;
            }else{
                left++;
            }
        }
        return Maxarea;
        }
};
