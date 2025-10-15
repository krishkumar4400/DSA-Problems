
const productExceptSelf = (nums) => {
    const n = nums.length;

    // calculating prefix
    const prefix = [];
    prefix[0] = 1;
    for(let i = 1; i < n; i++) {
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    // calculating suffix
    const suffix = [];
    suffix[n-1] = 1;
    for(let i = n-2; i >= 0; i--) {
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    // calculating ans
    const ans = [];
    for(let i = 0; i < n; i++) {
        ans[i] = prefix[i] * suffix[i];
    }
    return ans;
}

function main() {
  const nums = [1, 2, 3, 4, 5];
  const ans = productExceptSelf(nums);
  console.log(ans); // [ 120, 60, 40, 30, 24 ]
}

main();