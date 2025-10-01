#include<stdio.h>

int waterBottles(int numBottles, int numExchange) {
    int ans = 0, emptyBottles = 0;

    while(numBottles > 0) {
        ans += numBottles;
        emptyBottles += numBottles;
        numBottles = 0;

        if(emptyBottles >= numExchange) {
            numBottles = emptyBottles / numExchange;
            emptyBottles = emptyBottles % numExchange;
        }
    }
    return ans;
}

int main() {
    int numBottles = 9, numExchange = 3;
    int ans = waterBottles(numBottles, numExchange);
    printf("Total drunk water bottles: %d", ans); // 13
}