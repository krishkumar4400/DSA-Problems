#include <bits/stdc++.h>   // this includes everything (vector, unordered_map, etc.)
using namespace std;

class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        unordered_map<int, int> count;

        // Step 1: store remainder frequency
        for (int num : nums) {
            int rem = (num % value + value) % value; // handles negative nums
            count[rem]++;
        }

        // Step 2: find smallest missing integer
        for (int i = 0; ; i++) {
            int rem = i % value;
            if (count[rem] == 0) {
                return i; // missing number found
            }
            count[rem]--;
        }
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, -10, 7, 13, 6, 8};
    int value = 5;
    int ans = s.findSmallestInteger(nums, value);
    cout << "Smallest Missing Integer: " << ans << endl;
    return 0;
}
