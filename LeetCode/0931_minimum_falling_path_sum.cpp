#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n= matrix.size();
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int up=matrix[i-1][j];
                int upleft=1e9;
                if(j-1>=0){
                    upleft = matrix[i - 1][j - 1];
                }
                int upright=1e9;
                if(j+1<n){
                    upright = matrix[i - 1][j + 1];
                }
                 int bestPath = min(up, min(upleft, upright));
                 matrix[i][j] += bestPath;
            }
        }
        int minSum = 1e9;
        for (int j = 0; j < n; j++) {
            minSum = min(minSum, matrix[n - 1][j]);
        }
        return minSum;
    }
};