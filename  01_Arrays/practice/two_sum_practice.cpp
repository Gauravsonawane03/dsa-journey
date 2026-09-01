#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={3,2,4};
    int size=nums.size();
    unordered_map<int,int> twosum;
    int target=6;
    int needed=0;
    bool found =false;
    for(int i=0;i<size;i++){
        needed=target - nums[i];
        if(twosum.find(needed)!= twosum.end()){
            found=true;
            cout << twosum[needed] << " " << i;
        }
        twosum[nums[i]]=i;
    }
    if(!found){
        cout<<"pair does not exists."<<endl;
    }
    return 0;
}