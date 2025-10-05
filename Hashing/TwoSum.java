import java.util.*;

public class TwoSum {

    public static int[] twoSum(int[] nums, int target) {
        for(int i = 0; i < nums.length; i++) {
            int first = nums[i];
            for(int j = i + 1; j < nums.length; j++) {
                int second = nums[j];
                if(first + second == target) {
                    return new int[] {i,j}; // return pair of indeces
                }
            }
        }
        return new int[] {}; // empty if not found
    }

    public static int[] twoSumOptimal(int[] nums, int target) {
        Map<Integer,Integer> map = new HashMap<>(); // value -> index mapping

        for(int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];
            if (map.containsKey(complement)) {
                return new int[] {map.get(complement), i}; // found the pair
            }
            map.put(nums[i], i);// store current value and index
        }
        return new int[] {}; // no result found
    }
    public static void main(String[] args) {
        int[] nums = {1, 2, 2, 7};
        int target = 9;
        TwoSum s = new TwoSum();

        int[] result = s.twoSum(nums, target);
        System.out.println(Arrays.toString(result));

        int[] result2 = s.twoSumOptimal(nums, target);
        System.out.println(Arrays.toString(result2));
    }
}