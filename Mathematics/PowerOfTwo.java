public class PowerOfTwo {
    public static void main(String[] args) {
        int n = 32;
        System.out.println(powerOfTwo(n)); // true
        System.out.println(powerOfTwoOptimal(n)); // true                
    }

    public static boolean powerOfTwo(int n) {
        if(n <= 0) {
            return false;
        }

        while (n % 2 == 0) {
            n /= 2;
        }
        return n == 1;
    }

    // bit manipulation
    public static boolean powerOfTwoOptimal(int n) {

        return n > 0 && (n & (n - 1)) == 0;
    }
}
