import java.util.Arrays;

public class PairSum {
    public static void main(String[] args) {
        int[] nums = { 3, 7, 8, 12, 23, 38, 49, 51 };
        int target = 10;
        int ans1[] = pairSum(nums, target);
        int ans2[] = pairSumOptimal(nums, target);
        printAns(ans1);
        printAns(ans2);
    }

    // brute force approach
    public static int[] pairSum(int[] nums, int target) {
        int n = nums.length;
        int[] ans = { -1, -1 };
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    ans[0] = i;
                    ans[1] = j;
                    return ans;
                }
            }
        }
        return ans;
    }

    // optimal approach
    public static int[] pairSumOptimal(int[] nums, int target) {
        int n = nums.length;
        int start = 0;
        int end = n - 1;
        int[] ans = { -1, -1 };

        while (start < end) {
            if (nums[start] + nums[end] == target) {
                ans[0] = start;
                ans[1] = end;
                return ans;
            } else if (nums[start] + nums[end] < target) {
                start++;
            } else {
                end--;
            }
        }
        return ans;
    }

    public static void printAns(int[] ans) {
        int n = ans.length;
        for (int i = 0; i < 2; i++) {
            System.out.print(ans[i] + " ");
        }
        System.out.println();
    }
}
