import java.util.HashMap;

public class SingleNumber {
    public static void main(String[] args) {
        int[] nums = {5,1,2,3,3,2,1};
        int ans = singleNumberOptimal(nums);
        System.out.println(ans);
    }

    // brute force => hashmap
    public static int singleNumber(int[] nums) {
        HashMap<Integer,Integer>m = new HashMap<>();
        for(int val : nums) {
            m.put(val, m.getOrDefault(val, 0) + 1);
        }

        for(int key : m.keySet()) {
            if(m.get(key) == 1) {
                return key;
            }
        }
        return -1;
    }

    // optimal
    public static int singleNumberOptimal(int[] nums) {
        int ans = 0;
        for (int val : nums) {
            ans ^= val;
        }
        return ans;
    }
}
