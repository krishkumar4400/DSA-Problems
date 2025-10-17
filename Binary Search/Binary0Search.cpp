#include<iostream>
using namespace std;

int binarySearch(int nums[], int n, int element) {
    int start = 0;
    int end = n - 1;

    while(start <= end) { // O(log n) time complexity
        int mid = start + (end - start) / 2; // to handle large integers
        if(nums[mid] == element) {
            return mid;
        } else if(element < nums[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    // sorted array for binary search
    int nums[] = {1,2,4,5,7,17,32,46,70,99,100};
    int n = sizeof(nums) / sizeof(nums[0]);
    int element = 32; // 6 - index of element; -1 otherwise

    int ans = binarySearch(nums, n, element);
    cout << ans << endl;
    return 0;
}