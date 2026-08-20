#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> seen;
    vector<int> nums = {4, 7, 2, 7, 9, 4};
    for(auto it=nums.begin();it!=nums.end();it++){
        if (seen.count(*it) == 1){
         cout<<"first duplicate found: "<<*it<<endl;
         break;
    }else
    seen.insert(*it);
   }
}