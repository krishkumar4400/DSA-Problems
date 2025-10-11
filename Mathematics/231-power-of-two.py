#  brute force approach
def powerOfTwo(n):
    if n <= 0:
        return False
    
    while(n % 2 == 0):
        n /= 2
    return n == 1

# optimal approach -> bit manipulation
def powerOfTwoOptimal(n):
    return n > 0 and (n & (n - 1)) == 0

def main():
    n = 8
    print(powerOfTwo(n))
    print(powerOfTwoOptimal(n))
    
main()