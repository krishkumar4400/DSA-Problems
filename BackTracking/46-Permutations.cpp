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
            swap(nums[i], nums[idx]);
            getAllPermutation(nums, ans, idx + 1);
            swap(nums[i], nums[idx]);
        }
    }

    void permutation(vector<int> &nums)
    {
        vector<vector<int>> ans;
        getAllPermutation(nums, ans, 0);
        printPermutations(ans);
    }

    void printPermutations(vector<vector<int>> ans)
    {
        cout << "Permutations: \n";
        for (auto permutation : ans)
        {
            for (auto val : permutation)
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    vector<int> nums = {1, 2, 3};
    Solution s;
    s.permutation(nums);
}

/**Output

Permutations:
1 2 3
1 3 2
2 1 3
2 3 1
3 2 1
3 1 2

 */