def maximumPoints(nums, k):
    leftSum = 0
    rightSum = 0
    maxSum = 0
    rightIndex = len(nums) - 1
    
    # Step 1: Take first k elements from left
    for i in range(k):
        leftSum += nums[i]
        
    maxSum = leftSum

    # Step 2: Slide one by one from right
    for i in range(k-1, -1, -1):
        leftSum -= nums[i]
        rightSum += nums[rightIndex]
        maxSum = max(maxSum, leftSum + rightSum)
        rightIndex -= 1
        
    return maxSum


def main():
    nums = [12, 1, 4, 2, 9, 3, 9, 1, 7]
    k = 4
    ans = maximumPoints(nums, k)
    print(ans)   #  Output: 29


main()
