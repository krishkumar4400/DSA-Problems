class Solution:
    def twoSum (self, nums, target):
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                if(nums[i] + nums[j] == target):
                    return [i,j]
        return []
    
    def twoSumOptimal(self, nums, target):
        num_map = {}  # value -> index

        for i, num in enumerate(nums):
            complement = target - num
            if complement in num_map:
                return [num_map[complement], i]
            num_map[num] = i

        return []
                

def main():
    nums = [2,5,7,9]
    target = 9
    s = Solution()
    print(s.twoSum(nums,target))
    print(s.twoSumOptimal(nums,target))
    
main()