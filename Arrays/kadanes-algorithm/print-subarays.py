def printSubArrays(nums):
    n = len(nums)
    
    for start in range(n):
        for end in range(start, n):
            for i in range(start, end+1):
                print(nums[i], end="")
            print(" ", end="")
        print()

def main():
    nums = [1,2,3,4,5]
    printSubArrays(nums)
    
main()