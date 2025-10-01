#include <stdio.h>

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int swapped = 0; // optimization
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        // if no two elements were swapped → already sorted

        if (!swapped)
        {
            break;
        }
    }
}

void printArray(int arr[], int size)
{
    printf("Data of the Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {2, 43, 5, 89, 21, 43, 77, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    bubbleSort(arr, size);
    printArray(arr, size);
}

/** output

Data of the Array: 2 43 5 89 21 43 77 90
Data of the Array: 2 5 21 43 43 77 89 90

 */