
def singleNumber(nums):
    map = {}
    for val in nums:
        map[val] = map.get(val,0) + 1
        
    for num, count in map.items():
        if count == 1:
            return num
    return -1

def singleNumberOptimal(nums):
    ans = 0
    for val in nums:
        ans ^= val
        
    return ans

def main():
    nums = [4,1,2,3,3,1,2]
    ans = singleNumberOptimal(nums)
    ans = singleNumber(nums)
    print(ans)
main()