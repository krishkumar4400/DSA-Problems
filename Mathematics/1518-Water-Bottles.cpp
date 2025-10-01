#include<iostream>

using namespace std;

class Solution {
    public:
    int waterBottles(int numBottles, int numExchange) {
        int ans = 0, emptyBottles = 0;
        while(numBottles > 0) {
            ans += numBottles; // drink all water
            emptyBottles += numBottles; // empty bottles after drink all the bottle
            numBottles = 0;

            if(emptyBottles >= numExchange) {
                numBottles = emptyBottles / numExchange; // get the bottle after exchange empty bottles
                emptyBottles = emptyBottles % numExchange; // rest of the empty bottles
            }
        }
        return ans;
    }
};

int main() {
    int numBottles = 15, numExchange = 4;
    Solution s;
    int ans = s.waterBottles(numBottles, numExchange);
    cout << "Total Drunk Water Bottles: " << ans; // 19
}