#include<stdio.h>

int maxBottleDrunk(int numBottles, int numExchange) {
    int ans = numBottles;

    while (numBottles >= numExchange)
    {
        numBottles = numBottles - numExchange + 1;
        ans++;
        numExchange++;
    }
    return ans;
}

int main() {
    int numBottles = 10, numExchange = 3;
    int ans = maxBottleDrunk(numBottles, numExchange);
    printf("The maximum bottle can drunk: %d", ans); //13
    return 0;
}