def addDigit(num) :
    # if(num >= 0 and num <= 9): return num
    # if(num % 9 == 0): return 9
    
    # return num % 9
    
    # Using Direct Formula:
    return 0 if(num == 0) else 1 + (num - 1) % 9

def main():
    num = 39
    ans = addDigit(num)
    print(f"Sum of the Digit are: {ans}") # 3
    
main()