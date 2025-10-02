def maxBottlesDrunk(numBottles, numExchange):
    ans = numBottles
    
    while(numBottles >= numExchange):
        numBottles = numBottles - numExchange + 1
        ans = ans + 1
        numExchange = numExchange + 1
        
    return ans

def main():
    numBottles = 11
    numExchange = 4
    
    ans = maxBottlesDrunk(numBottles, numExchange)
    
    print(f"Maximum Bottles Can Drunk: {ans}") # 13
    
main()