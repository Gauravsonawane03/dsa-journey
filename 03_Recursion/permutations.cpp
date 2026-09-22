#include<iostream>
#include<vector>
using namespace std;
void generatePermutations(vector<int>& nums,vector<int>& current,vector<bool>& used,vector<vector<int>>& answers){
    if(current.size()==nums.size()){
        answers.push_back(current);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(used[i]==true){
            continue;
        }
        used[i]=true;
        current.push_back(nums[i]);
        generatePermutations(nums,current,used,answers);
        current.pop_back();
        used[i]=false;
    }
}
int main(){
    vector<int> nums = {1, 2, 3};
    vector<int> current;
    vector<bool> used{false};
    vector<vector<int>> answers;
    generatePermutations(nums, current, used, answers);
      for(int i = 0; i < answers.size(); i++) {
        for(int j = 0; j < answers[i].size(); j++) {
            cout << answers[i][j] << " ";
        }
        cout << endl;
    }
return 0;
}