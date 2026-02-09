#include<iostream>
using namespace std;

int smallest(int nums[], int size) {
    int smallest = nums[0];
    for(int i=1; i<size; i++) {
        if(nums[i] < smallest) {
            smallest = nums[i];
        }
    }
    return smallest;
}
int largest(int nums[], int size) {
    int largest = nums[0];
    for(int i=1; i<size; i++) {
        if(nums[i] > largest) {
            largest = nums[i];
        }
    }
    return largest;
}

int changeArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        arr[i] = 2 * arr[i];
    }

}

int linearSearch(int nums[], int size, int target) { // O(n)
    for(int i=0; i<size; i++) {
        if(nums[i] == target) { // FOUND
            return i; // index of that element
        }
    }
    return -1; // NOT FOUND 
} 

int main(){
    int marks[10];
    double price[65];

    int result[5] = {11,22,33,44,55};
    double cost[] = {130.43, 120.8, 420,11}; //3
    int test[50] = { 1,2,3,4,5 }; //50
    // int x[4] = {1,2,3,4,5}; // error

    cout << cost[0] << endl;
    cout << cost[1] << endl;
    cout << cost[2] << endl;
    cost[0] = 101;
    cout<<cost[0] << endl;


    // 0 to size - 1
    cost[5] = 200;
    cout<<cost[5]<<endl;
    cout<<test[5] <<endl; // 0

    // looping over the array
    int arr[] = {1,2,3,4,5,6};
    for(int i=0; i<6; i++) {
        cout<<arr[i] << " ";
    }
    cout<<endl;

    int size = 5;
    int nums[size];
    for(int i=0; i<size; i++) {
        cin >> nums[i];
    }

    // 0 to size-1
    for(int i=0; i<size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    // find smallest and largest in array
    cout << "Smallest = " <<smallest(nums, size) << endl;
    cout << "Largest = " << largest(nums, size) << endl;

    // min and max function
    int num1 = 10;
    int num2 = 20;
    int smallest = min(num1,num2);
    int largest = max(num1,num2);
    cout << smallest << " " << largest <<endl;

    // pass by refrence
    changeArray(nums,size);
    for(int i=0; i<size; i++) {
        cout << nums[i] << " ";
    }
    cout <<endl;

    // linear search
    int target = 8;
    cout << linearSearch(nums,size, target) << endl;

    return 0;
}