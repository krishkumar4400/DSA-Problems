#include<iostream>
#include<vector>

using namespace std;

void printSubArray(vector<int>nums) {
    int n = nums.size();
    for(int start = 0; start < n; start++) {
        for(int end = start; end < n; end++) {
            for(int i = start; i <= end; i++) {
                cout<<nums[i];
            }
            cout << " ";
        }
        cout<<endl;
    }
}

int main() {
    vector<int>nums = {1,2,3,4,5};
    printSubArray(nums);
}