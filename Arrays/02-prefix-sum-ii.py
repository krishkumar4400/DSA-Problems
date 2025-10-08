def prefix(nums):
    for i in range(1, len(nums)):
        nums[i] = nums[i-1]

    return nums

def rangeSum(nums):
    q = int(input("Enter the number of query: "))
    while(q > 0):
        l = int(input("Enter the value of L: "))
        r = int(input("Enter the value of R: "))
        if(ans == r):
            ans = nums[r]
        else:
            ans = nums[r] - nums[l-1]
        print(ans)
        q = q-1

def main():
    nums = [1,2,3,4,5,6]
    print(nums)

main()