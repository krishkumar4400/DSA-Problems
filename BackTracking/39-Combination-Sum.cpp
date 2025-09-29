#include<iostream>
#include<vector>
#include<set>

using namespace std;

class Solution {
    public:
    set<vector<int>>s;
        void getAllCombinations(vector<int> &candidates, int target, int idx, vector<int> &combination, vector<vector<int>> &ans) {
            if (idx == candidates.size() || target < 0)
            {
                return;
            }
            if (target == 0)
            {
                if(s.find(combination) == s.end()) {
                    ans.push_back({combination});
                    s.insert(combination);
                }
                return;
            }
            combination.push_back(candidates[idx]);
            // Single
            getAllCombinations(candidates, target - candidates[idx], idx + 1, combination, ans);

            // Multiple
            getAllCombinations(candidates, target - candidates[idx], idx, combination, ans);

            // Exclusion
            combination.pop_back();
            getAllCombinations(candidates, target, idx + 1, combination, ans);
        }

        vector<vector<int>> combinationSum(vector<int> &candidates, int target)
        {
            vector<int> combination;
            vector<vector<int>> ans;
            getAllCombinations(candidates, target, 0, combination, ans);
            return ans;
        }

    void printCombinations (const vector<vector<int>> ans, int target) {
        cout << "The combination sum for the target " << target << " are :\n";
        for(const auto &combination : ans) {
            for(auto val : combination) {
                cout << val << " ";
            }
            cout << endl;
        }
    }
};

int main(){
    // vector<int>candidates = { 2, 3, 6, 7 };
    vector<int>candidates = { 2, 3, 5 };
     int target = 8;

     Solution s;

     vector<vector<int>>result = s.combinationSum(candidates, target);
     s.printCombinations(result, target);
     return 0;
}

/** output

The combination sum for the target 7 are :
2 2 3
7

The combination sum for the target 8 are :
2 3 3
2 2 2 2
3 5

 */