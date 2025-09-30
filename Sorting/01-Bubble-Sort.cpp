#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {

    for(int i = 0; i<n-1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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