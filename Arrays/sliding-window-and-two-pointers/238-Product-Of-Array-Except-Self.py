def productExceptSelf(nums):
    n = len(nums)
    
    # calculating prefix
    prefix = [0] * n
    prefix[0] = 1
    for i in range(1, n):
        prefix[i] = prefix[i-1] * nums[i-1]
        
    # calculating suffix
    suffix = [0] * n
    suffix[n-1] = 1
    for i in range(n-2, -1, -1):
        suffix[i] = suffix[i+1] * nums[i+1]
        
    # calculating ans
    ans = [0] * n
    for i in range(n):
        ans[i] = prefix[i] * suffix[i]
        
    return ans

def main():
    nums = [1,2,3,4,5]
    ans = productExceptSelf(nums)
    print(ans) # [120, 60, 40, 30, 24]
    
main()