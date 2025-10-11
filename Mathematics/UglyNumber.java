public class UglyNumber {
    public static void main(String[] args) {
        int n = 15;

        // factors -> 2,3,5

        System.out.println(uglyNumber(n)); // 15
    }

    public static boolean uglyNumber(int n) {
        if(n <= 0) {
            return false;
        }

        while (n % 2 == 0) {
            n /= 2;
        }

        while (n % 3 == 0) {
            n /= 3;
        }

        while (n % 5 == 0) {
            n /= 5;
        }
        return n == 1;
    }
}
