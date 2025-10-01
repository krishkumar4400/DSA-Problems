
import java.util.Arrays;

public class BubbleSort {
    public static void main(String[] args) {
        int[] arr = {32, 1, 67, 8, 23, 65, 92, 73, 16};

        System.out.println("Array Before Sorting: ");
        System.out.println(Arrays.toString(arr));
        bubbleSort(arr);
        System.out.println("Array After Sorting");
        System.out.println(Arrays.toString(arr));
    }

    public static void bubbleSort(int[] arr) {
        int n = arr.length;
        for(int i = 0; i < n-1; i++) {
            boolean swapped = false;
            for(int j = 0; j < n-1-i; j++) {
                if(arr[j] > arr[j + 1]) {
                    //swap
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }
            if(!swapped) break;
        }
    }
}

/**

 * Array Before Sorting:
 * [32, 1, 67, 8, 23, 65, 92, 73, 16]
 * Array After Sorting
 * [1, 8, 16, 23, 32, 65, 67, 73, 92]

 */