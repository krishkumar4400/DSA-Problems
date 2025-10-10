
#  Brute - Force Approach
def maximumSubArraySum(nums):
    n = len(nums)
    maxSum = float('-inf')
    for start in range(n):
        for end in range(start, n):
            currSum = 0
            for i in range(start, end+1):
                currSum += nums[i]
                maxSum = max(maxSum, currSum)
                
    print(maxSum) #  9
    
#  Optimal Approach
def maximumSubArraySumOptimal(nums):
    maxSum = float('-inf')
    currSum = 0
    n = len(nums)
    for i in range(n):
        currSum += nums[i]
        maxSum = max(currSum, maxSum)
        if currSum < 0:
            currSum = 0
    print(maxSum) # 9

def main():
    nums = [5, -3, 2, 5, -5, 3]
    maximumSubArraySum(nums)
    maximumSubArraySumOptimal(nums)
    
main()
    