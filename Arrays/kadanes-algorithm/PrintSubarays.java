public class PrintSubarays {

    public static void main(String[] args) {
        int[] nums = {1,2,3,4,5};
        printSubarays(nums);
    }

    public static void printSubarays(int[] nums) {
        int n = nums.length;

        for(int start = 0; start < n; start++) { // choose the starting point
            for(int end = start; end < n; end++) { // choose the ending point
                for(int i = start; i <= end; i++) { // iterates between start and end and print subarray
                    System.out.print(nums[i]);
                }
                System.out.print(" ");
            }
            System.out.println();
        }
    }
}