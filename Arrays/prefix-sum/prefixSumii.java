import java.util.Scanner;

public class prefixSumii {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] nums = { 1, 4, 3, 2, 5, 6 };
        printArray(nums);
        // rangeSum(nums, sc);

        prefix(nums);
        printArray(nums);
        rangeSumOptimal(nums, sc);
    }

    public static void printArray(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            System.out.print(nums[i] + " ");
        }
        System.out.println();
    }

    public static void prefix(int[] nums) {
        for (int i = 1; i < nums.length; i++) {
            nums[i] += nums[i - 1];
        }
    }

    public static void rangeSum(int[] nums, Scanner sc) {
        System.out.println("Enter the number of queries: ");
        int q = sc.nextInt();
        while (q-- > 0) {
            int sum = 0;
            int l = sc.nextInt();
            int r = sc.nextInt();
            for (int i = l; i <= r; i++) {
                sum += nums[i];
            }
            System.out.println(sum);
        }
    }

    public static void rangeSumOptimal(int[] prefix, Scanner sc) {
        System.out.println("Enter the number of queries: ");
        int q = sc.nextInt();
        while (q-- > 0) {
            System.out.println("Enter the value of L: ");
            int l = sc.nextInt();
            System.out.println("Enter the value of R: ");
            int r = sc.nextInt();

            int ans = l == 0 ? prefix[r] : prefix[r] - prefix[l - 1];
            System.out.println(ans);
        }
    }
}