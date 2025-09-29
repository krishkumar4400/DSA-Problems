#include <iostream>
#include <vector>
#include <string>
#include<algorithm>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string s) {
        string s2 = s;
        reverse(s2.begin(), s2.end());
        return s == s2;
    }

    void getAllPartitions(string s, vector<string> &partitions, vector<vector<string>> &ans)
    {
        if(s.size() == 0) {
            ans.push_back(partitions);
            return;
        }
        for (int i = 0; i < s.size(); i++)
        {
            string part = s.substr(0, i + 1);
            if (isPalindrome(part))
            {
                partitions.push_back(part);
                getAllPartitions(s.substr(i + 1), partitions, ans);
                partitions.pop_back();
            }
        }
    }

    vector<vector<string>> palindromePartition(string s)
    {
        vector<string> partitions;
        vector<vector<string>> ans;
        getAllPartitions(s, partitions, ans);
        return ans;
    }

    void printPartitions(vector<vector<string>> &result) {
        cout << "Partitions are : \n";
        cout << "[";
        for(auto partition : result) {
            cout << "[";
            for(auto val : partition) {
                cout << val << " ";
            }
            cout << "]";
        }
        cout << "]";
    }
};

int main()
{
    string str = "aab";
    Solution s;
    vector<vector<string>> result = s.palindromePartition(str);
    s.printPartitions(result);
}

/** output
 
Partitions are :
[[a a b ][aa b ]]

 */