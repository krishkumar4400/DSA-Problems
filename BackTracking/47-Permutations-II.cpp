#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void getAllPermutation(vector<int> &nums, vector<vector<int>> &ans, int idx)
    {
        if (idx == nums.size())
        {
            ans.push_back({nums});
            return;
        }
        for (int i = idx; i < nums.size(); i++)
        {
            bool shouldSkeep = false;
            for (int j = idx; j < i; j++)
            {
                if (nums[j] == nums[i])
                {
                    shouldSkeep = true;
                    break;
                }
            }
            if (shouldSkeep)
                continue;

            swap(nums[i], nums[idx]);
            getAllPermutation(nums, ans, idx + 1);
            swap(nums[i], nums[idx]);
        }
    }

    void printAllPermutations(vector<vector<int>> ans)
    {
        cout << "Permutations: \n";
        for (auto permuation : ans)
        {
            for (auto val : permuation)
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    void permutations(vector<int> &nums)
    {
        vector<vector<int>> ans;
        getAllPermutation(nums, ans, 0);
        printAllPermutations(ans);
    }
};

int main()
{
    vector<int> nums = {1, 1, 2};
    Solution s;
    s.permutations(nums);
}

/** Output
Permutations:
1 1 2
1 2 1
2 1 1
 */