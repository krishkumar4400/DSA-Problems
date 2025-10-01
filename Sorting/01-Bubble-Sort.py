def bubbleSort(arr):
        n = len(arr)
        for i in range(n-1):
            swapped = False
            for j in range(n-1-i):
                if(arr[j] > arr[j + 1]):
                    # swap
                    arr[j], arr[j + 1] = arr[j + 1], arr[j]
                    swapped = True
            if not swapped: break # Already Sorted
                    
def main():
    arr = [2, 22, 54, 87, 1, 11, 54, 90, 10]
    print("Array Before Sorting: ", arr)
    bubbleSort(arr)
    print("Array After Sorting: ", arr)

main()

'''
Array Before Sorting:  [2, 22, 54, 87, 1, 11, 54, 90, 10]
Array After Sorting:  [1, 2, 10, 11, 22, 54, 54, 87, 90]
'''