#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> twosum;
        int needed;

        for(int i = 0; i < nums.size(); i++) {
            needed = target - nums[i];

            if(twosum.find(needed) != twosum.end()) {
                return {twosum[needed], i};
            }

            twosum[nums[i]] = i;
        }

        return {};
    }
};