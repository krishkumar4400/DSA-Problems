#include<stdio.h>


// brute force approach
int powerOfTwo(int n) {
    if(n <= 0) {
        return 0;
    }

    while (n % 2 == 0)
    {
        n /= 2;
    }
    return n == 1;
}

int powerOfTwoOptimal(int n) {
    return n > 0 && (n & (n-1)) == 0;
}


int main() {
    int n = 129;
    printf("%d\n", powerOfTwo(n)); // 0
    printf("%d\n", powerOfTwoOptimal(n)); // 0
}