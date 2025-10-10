// Brute Force approach 
const pairSum = (nums,target) => {
    const n = nums.length;
    const ans = [];
    for(let i = 0; i < n; i++) {
        for(let j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] === target) {
                ans.push(i);
                ans.push(j);
                return ans;
            }
        }
    }
}

// optimal approach two pointers
const pairSumOptimal = (nums, target) => {
    const ans = [];
    let start = 0;
    let end = nums.length-1;
    while(start < end) {
        if(nums[start] + nums[end] === target) {
            ans.push(start);
            ans.push(end);
            return ans;
        } else if(nums[start] + nums[end] < target) {
            start++;
        } else {
            end--;
        }
    }
}

function main() {
  const nums = [2, 7, 1, 11, 13, 15];
  const target = 17;
  const ans1 = pairSum(nums, target);
  const ans2 = pairSumOptimal(nums, target);
  console.log(ans1); // [ 0, 5 ]
  console.log(ans2); // [ 0, 5 ]
}

main();