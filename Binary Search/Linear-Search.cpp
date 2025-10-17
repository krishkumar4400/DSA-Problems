#include<iostream>
using namespace std;

int linearSearch(int nums[], int n, int element) { // o(n) time complexity
    for(int i = 0; i < n; i++) {
        if(nums[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    int nums[] = {2,1,4,33,22,54,6,44,9,0};
    int n = sizeof(nums) / sizeof(nums[0]);
    int element = 22;

    int ans = linearSearch(nums, n, element);
    cout << ans << endl; // index of the element // 4
}