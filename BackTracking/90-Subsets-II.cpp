#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void getAllSubsets(vector<int> &nums, vector<int> &ans, vector<vector<int>> &allSubsets, int idx)
    {
        if (idx == nums.size())
        {
            allSubsets.push_back({ans});
            return;
        }

        // Include
        ans.push_back(nums[idx]);
        getAllSubsets(nums, ans, allSubsets, idx + 1);

        // Exclude
        ans.pop_back();

        int i = idx + 1;
        while (i < nums.size() && nums[i - 1] == nums[i])
        {
            i++;
        }
        getAllSubsets(nums, ans, allSubsets, i);
    }

    void printSubsets(vector<vector<int>>allSubsets) {
        for (auto subset : allSubsets)
        {
            cout << "[ ";
            for (auto val : subset)
            {
                cout << val << " ";
            }
            cout << "]";
            cout << endl;
        }
    }
};

int main()
{
    vector<int> nums = {1, 2, 2};
    vector<int> ans;
    vector<vector<int>> allSubsets;
    
    Solution s;
    s.getAllSubsets(nums, ans, allSubsets, 0);
    s.printSubsets(allSubsets);
}

/**
 * Output
 [ 1 2 2 ]
[ 1 2 ]
[ 1 ]
[ 2 2 ]
[ 2 ]
[ ]
 */