#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {

    for(int i = 0; i<n-1; i++) {
        bool swapped = false;
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j+1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i< n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {34, 78, 9, 4, 76, 1, 32, 63};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    bubbleSort(arr, n);
    printArray(arr, n);
}

/** output

34 78 9 4 76 1 32 63
1 4 9 32 34 63 76 78

*/