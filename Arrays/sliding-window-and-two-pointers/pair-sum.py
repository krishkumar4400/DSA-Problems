# brute force approach
def pairSum(nums, target):
    n = len(nums)
    ans = []
    for i in range(n):
        for j in range(i+1,n):
            if(nums[i] + nums[j] == target):
                ans.append(i)
                ans.append(j)
                return ans
    return [-1,-1]
            
# optimal approach -> using two pointers
def pairSumOptimal(nums, target):
    ans = []
    n = len(nums)
    start = 0
    end = n-1
    while(start < end):
        if(nums[start] + nums[end] == target):
            ans.append(start)
            ans.append(end)
            return ans
        elif(nums[start] + nums[end] < target):
            start = start + 1
        else:
            end = end - 1
        
    ans.append(-1)
    ans.append(-1)
    return ans

def main():
    nums = [4, 5, 16, 18, 33, 48]
    target = 20
    
    ans1 = []
    ans2 = []
    ans1 = pairSum(nums,target)
    ans2 = pairSumOptimal(nums,target)
    print(ans1)
    print(ans2)
    
main()