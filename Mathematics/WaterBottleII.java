public class WaterBottleII {

    public static void main(String[] args) {
        int numBottles = 15, numExchange = 4;
        int ans = maxBottleDrunk(numBottles,numExchange);
        System.out.println("Maximum Bottles Can Drunk: " + ans); // 18
    }

    public static int maxBottleDrunk(int numBottles, int numExchange) {
        int ans = numBottles;
        while (numBottles >= numExchange) {
            numBottles = numBottles - numExchange + 1;
            ans++;
            numExchange++;
        }
        return ans;
    }
}