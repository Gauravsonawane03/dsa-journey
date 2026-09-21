#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void combinationSumII(int start, vector<int> &candidates, int target, vector<int> &current, vector<vector<int>> &answers)
{
    if (target == 0)
    {
        answers.push_back(current);
        return;
    }
    else if (start == candidates.size())
    {
        return;
    }
    for (int j = start; j < candidates.size(); j++)
    {
        if (j > start && candidates[j] == candidates[j - 1])
        {
            continue;
        }
        if (candidates[j] > target)
        {
            break;
        }
        current.push_back(candidates[j]);
        combinationSumII(j + 1, candidates, target - candidates[j], current, answers);
        current.pop_back();
    }
}
int main() {
    // vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    // int target = 8;
    vector<int> candidates = {2, 5, 2, 1, 2};
    int target = 5;

    sort(candidates.begin(), candidates.end());

    vector<int> current;
    vector<vector<int>> answers;

    combinationSumII(0, candidates, target, current, answers);

    for(int i = 0; i < answers.size(); i++) {
        for(int j = 0; j < answers[i].size(); j++) {
            cout << answers[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}