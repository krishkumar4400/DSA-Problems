#include<stdio.h>
#include<stdlib.h>

#define MAX 1000

void twoSum(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("[%d, %d]", i, j);
                return;
            }
        }
    }
    printf("No Pair Found !");
    return;
}

void twoSumOptimal(int arr[], int n, int target) {
    int hash[MAX] = {0};
    for(int i = 0; i < n; i++) {
        int complement = target - arr[i];
        if(hash[complement] != 0) { // Found the complement
            printf("[%d, %d]\n", hash[complement] - 1, i);
            return;
        }
        hash[arr[i]] = i + 1; // store index+1 to differentiate from 0
    }
    printf("No Pair Found !");
}

int main() {
    int arr[] = {2,7,11,15};
    int target = 18;
    int n = sizeof(arr) / sizeof(arr[0]);

    twoSum(arr, n, target);
    twoSumOptimal(arr, n, target);
}