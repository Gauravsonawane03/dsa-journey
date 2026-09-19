#include<iostream>
#include<vector>
using namespace std;
void combinationSum(int i,vector<int>& candidates,int target,vector<int>& current, vector<vector<int>>& answers) {
    if(target==0){
       answers.push_back(current);
        return;
    }else if(target <0){
        return;
    }else if(i >=candidates.size()){
        return;
    }
    current.push_back(candidates[i]);
    combinationSum(i,candidates,target-candidates[i],current,answers);
    current.pop_back();
    combinationSum(i+1,candidates,target,current,answers);
}
int main(){
    vector<int> candidates={2, 3, 6, 7};
    int target=8;
    vector<int> current;
    vector<vector<int>> answer;
    combinationSum(0,candidates,target,current,answer); 
    for(int i=0;i<answer.size();i++){
        for(int j=0;j<answer[i].size();j++){
            cout<<answer[i][j]<<" ";
        }
        cout<<endl;
    }
}
