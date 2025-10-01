def waterBottles(numBottles, numExchange):
    ans=0
    empty=0
    
    while(numBottles > 0):
        ans += numBottles
        empty += numBottles
        numBottles = 0
        
        if(empty >= numExchange):
            numBottles = int(empty / numExchange)
            empty = empty % numExchange
            
    return ans

def main():
    numBottles = 9
    numExchange = 3
    
    ans = waterBottles(numBottles, numExchange)
    
    print(f"Total drunk Water Bottles: {ans}") # 13
    
main()