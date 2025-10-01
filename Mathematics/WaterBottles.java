
package Mathematics;

public class WaterBottles {
    public static void main(String[] args) {
        int numBottles = 9, numExchange = 3;
        int ans = waterBottles(numBottles, numExchange);
        System.out.println("Total drunk water bottles: " + ans); // 13
    }

    public static int waterBottles(int numBottles, int numExchange) {
        int ans = 0, emptyBottles = 0;

        while (numBottles > 0) {
            ans += numBottles;
            emptyBottles += numBottles;
            numBottles = 0;

            if (emptyBottles >= numExchange) {
                numBottles = emptyBottles / numExchange;
                emptyBottles = emptyBottles % numExchange;
            }
        }
        return ans;
    }
}




