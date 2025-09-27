#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    void getAllPermutations(string &str, vector<string> &ans, int idx)
    {
        if (idx == str.length())
        {
            ans.push_back(str);
            return;
        }

        for (int i = idx; i < str.length(); i++)
        {
            swap(str[i], str[idx]);
            getAllPermutations(str, ans, idx + 1);
            swap(str[i], str[idx]);
        }
    }

    void printPermutations(vector<string> ans)
    {
        cout << "Subsets: \n";
        for (auto subset : ans)
        {
            cout << subset << endl;
        }
    }

    void permutations(string str)
    {
        vector<string> ans;
        getAllPermutations(str, ans, 0);
        printPermutations(ans);
    }
};

int main()
{
    string str = "ABC";
    Solution s;
    s.permutations(str);
}

/** Output

Subsets:
ABC
ACB
BAC
BCA
CBA
CAB

 */