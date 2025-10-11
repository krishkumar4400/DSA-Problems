#include<iostream>

using namespace std;

bool uglyNumber(int n) {
    if(n <= 0) {
        return false; // 0 and negatives can't be factors of these numbers
    }

    while (n % 2 == 0)
    {
        n /= 2;
    }

    while (n % 3 == 0)
    {
        n /= 3;
    }

    while (n % 5 == 0)
    {
        n /= 5;
    }

    return n == 1;
}

int main() {
    int n = 10;
    // prime factors: 2,3,5
    cout << uglyNumber(n); // 1
}