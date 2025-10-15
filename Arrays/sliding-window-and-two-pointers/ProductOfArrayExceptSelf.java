import java.util.Arrays;

public class ProductOfArrayExceptSelf {

    public static void main(String[] args) {
        int[] nums = {1,2,3,4};

        int[] ans = productExceptSelf(nums);
        printArrays(ans);
    }

    public static void printArrays(int[] ans) {
        int n = ans.length;
        for(int i = 0; i < n; i++) {
            System.out.print(ans[i] + " ");
        }
    }

    public static int[] productExceptSelf(int[] nums) {
        int n = nums.length;

        // calculating prefix
        int[] prefix = new int[n];
        prefix[0] = 1;
        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] * nums[i-1];
        }

        // calculating suffix
        int[] suffix = new int[n];
        suffix[n-1] = 1;
        for(int i = n-2; i >= 0; i--) {
            suffix[i] = suffix[i+1] * nums[i+1];
        }

        // calculating ans
        int[] ans = new int[n];
        for(int i = 0; i < n; i++) {
            ans[i] = prefix[i] * suffix[i];
        }

        return ans;
    }
}