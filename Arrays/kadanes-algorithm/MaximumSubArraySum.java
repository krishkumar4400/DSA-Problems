
public class MaximumSubArraySum {

    public static void main(String[] args) {
        int[] nums = {3, -4, 5, 20, -10, 7, 8};
        maximumSubArraySumOptimal(nums);
        maximumSubArraySum(nums);
    }


    // Brute - Force Approach
    public static void maximumSubArraySum(int[] nums) {
        int maxSum = Integer.MIN_VALUE;
        int n = nums.length;
        for(int start = 0; start < n; start++) { // starting point
            for(int end = start; end < n; end++) { // ending point
                int currSum = 0;
                for(int i = start; i <= end; i++) {
                    currSum += nums[i];
                }
                maxSum = Math.max(maxSum, currSum);
            }
        }
        System.out.println(maxSum); // 30
    }


    // optimal approach - kadane's algorithm
    public static void maximumSubArraySumOptimal(int[] nums) {
        int n = nums.length;
        int currSum = 0;
        int maxSum = Integer.MIN_VALUE;

        for(int i = 0; i < n; i++) {
            currSum += nums[i];
            maxSum = Math.max(maxSum, currSum);
            if(currSum < 0) {
                currSum = 0;
            }
        }
        System.out.println(maxSum); // 30
    }
}
