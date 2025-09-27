#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
    public:

    void getAllPermutations(string& str, vector<string>&ans, int idx) {
        if(idx == str.length()) {
            ans.push_back(str);
            return;
        }

        for(int i = idx; i<str.length(); i++) {
            bool shouldSkip = false;
            for(int j = idx; j < i; j++) {
                if(str[i] == str[j]){
                    shouldSkip = true;
                    break;
                }
            }
            if(shouldSkip) continue;
            swap(str[i], str[idx]);
            getAllPermutations(str, ans, idx+1);
            swap(str[i], str[idx]);
        }
    }

    void printPermutations(const vector<string>&ans) {
        cout<<"Permutations:\n";
        for(const auto &permutation : ans) {
            cout<<permutation << endl;
        }
    }

    void permutations(string str) {
        vector<string>ans;
        getAllPermutations(str, ans, 0);
        printPermutations(ans);
    }
};

int main() {
    string str = "AAB";
    Solution s;
    s.permutations(str);
}

/** Output
Permutations:
AAB
ABA
BAA
 */