
public class AddDigits {
    public static void main(String[] args) {
        int num = 439;
        int ans = addDigits(num);
        System.out.println("The Sum of the digits are: " + ans); // 7
    }

    public static int addDigits(int num) {
        // if(num % 9 == 0) return 9;
        // if(num >= 0 && num <= 9) return num;
        // return num % 9;

        // using Direct Formula
        return (num == 0) ? 0 : 1 + (num - 1) % 9;
    }
}
