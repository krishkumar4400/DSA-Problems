
// Brute Force Approach
const maximumSubArraySum = (nums) => {
    const n = nums.length;

    let maxSum = -Infinity;
    
    for(let start = 0; start < n; start++) { // starting point
        for(let end = start; end < n; end++){ // ending point
            let currSum = 0;
            for(let i = start; i <= end; i++) {
                currSum += nums[i];
                maxSum = Math.max(currSum, maxSum);
            }
        }
    }
    console.log(maxSum); // 21
}


// Optimal Approach - Kadane's Algorithm
const maximumSubArraySumOptimal = (nums) => {
  let maxSum = -Infinity;
  let currSum = 0;
  const n = nums.length;
  for (let i = 0; i < n; i++) {
    currSum += nums[i];
    maxSum = Math.max(currSum, maxSum);
    if (currSum < 0) {
      currSum = 0;
    }
  }
  console.log(maxSum); //// 21
}

function main() {
    const nums = [-1, 8, 4, 5, 0, -3, 7]
    maximumSubArraySum(nums); 
    maximumSubArraySumOptimal(nums); 
}

main();