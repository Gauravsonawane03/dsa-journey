#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
   unordered_set<int> noDuplicates;
   vector<int> nums = {4, 2, 7, 4, 9};
   for(auto it=nums.begin();it!=nums.end();it++){
    if (noDuplicates.count(*it) == 0){
        noDuplicates.insert(*it);
    }else
    cout<<"duplicate found for: "<<*it<<endl;
   }
   for(auto it=noDuplicates.begin();it!=noDuplicates.end();it++){
    cout<<*it<<" ";
   }
   return 0;
}