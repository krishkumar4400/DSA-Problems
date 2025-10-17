#include<iostream>
using namespace std;

int searchInRotatedSortedArray(int nums[], int n, int target) {
    int st = 0; 
    int end = n-1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if(target == nums[mid]) {
            return mid;
        }
        // ls or rs
        
        if(nums[st] <= nums[mid]) {// left sorted
            if(nums[st] <= target <= nums[mid]) { // left
                end = mid-1;
            } else {
                st = mid + 1;
            }
        } else { // right sorted
             if(nums[mid] <= target <= nums[end]) { // right
                st = mid + 1;
            } else { // left
                end = mid - 1; 
            }
        }
    }
    return -1;
}

int main() {
    int nums[] = {3,4,5,6,7,0,1,2};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 0;

    int ans = searchInRotatedSortedArray(nums, n, target);
    cout << ans << endl;
    return 0;
}