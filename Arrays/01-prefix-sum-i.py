def prefix(nums):
    for i in range(1, len(nums)):
        nums[i] += nums[i-1];
    return nums

def main():
    nums = [1,4,3,2,5]
    print(nums)
    nums = prefix(nums)
    print(nums)
    
main()