
/*
Problem: Reverse Array
LeetCode:
Pattern: Two pointers
Difficulty: Easy

Approach 1: Two pointers
Time: O(n)
Space: O(1)
*/

#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int st = 0;
    int end = size - 1;
    while (st < end)
    {
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    cout << "Array Elements: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {3, 4, 2, 5, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    reverseArray(arr, size);
    printArray(arr, size);

    return 0;
}