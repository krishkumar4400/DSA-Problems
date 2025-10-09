public class MaximumPoints {
    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4, 5, 6, 10};
        int k = 3;
        int ans = maximumPoints(nums, k);
        System.out.println(ans); // 21
    }

    public static int maximumPoints(int[] nums, int k) {
        int n = nums.length;
        int leftSum = 0, rightSum = 0, maxSum = 0;
        for(int i = 0; i < k; i++) {
            leftSum += nums[i];
        }
        maxSum = leftSum;

        int rightIndex = n-1;
        for(int i = k-1; i >= 0; i--) {
            leftSum -= nums[i];
            rightSum += nums[rightIndex];
            maxSum = Math.max(maxSum, leftSum + rightSum);
            rightIndex--;
        }
        return maxSum;
    }
}
