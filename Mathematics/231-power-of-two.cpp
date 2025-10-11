#include<iostream>

using namespace std;

// brute force approach
bool powerOfTwo(int n) {
    if(n <= 0) {
        return false;
    }

    while (n % 2 == 0)
    {
        n /= 2;
    }
    return n == 1;
} 

// optimal apporoach -> using bit manipulation
bool powerOfTwoOptimal(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int n = 64;
   cout<< powerOfTwo(n) << endl; // 1
   cout<<powerOfTwoOptimal(n) << endl; // 1
   return 0;
}