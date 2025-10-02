#include<iostream>

using namespace std;

int maxBottleDrunk(int numBottles, int numExchange) {
    int ans = numBottles; // drink initial full bottles

    while (numBottles >= numExchange)
    {
        numBottles = numBottles - numExchange + 1; // // Exchange and drink one more bottle 
        ans++; // increase the answer by 1 because 1 new bottle has exchange and drunk 
        numExchange++;  // increase exchange rate by 1
    }
    return ans;
}

int main() {
    int numBottles = 10, numExchange = 3;
    int ans = maxBottleDrunk(numBottles,numExchange);
    cout << "The Maximum Number of Water Bottle can Drunk: " << ans << endl; // 13
    return 0;
}