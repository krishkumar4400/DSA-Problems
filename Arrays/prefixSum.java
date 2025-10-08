public class prefixSum {
    public static void main(String[] args) {
        int[] arr = {1,2,4,3,5};
        printArray(arr);
        prefix(arr);
        printArray(arr);
    }
    public static void printArray(int[] arr) {
        for (int i : arr) {
            System.out.print(i + " ");
        }
        System.out.println();
    }

    // optimal apprach
    public static int[] prefix(int[] nums) {
        for(int i = 1; i < nums.length; i++) {
            nums[i] += nums[i-1];
        }
        return nums;
    }
}