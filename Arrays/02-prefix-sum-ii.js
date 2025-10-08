const prefix = (nums) => {
  for (let i = 1; i < nums.length; i++) {
    nums[i] += nums[i - 1];
  }
  return nums;
};

const rangeSum = (nums) => {
  let queries = 3;
  while (queries--) {
    let l = 5;
    let r = 5;
    let sum = 0;

    sum = l === 0 ? nums[r] : nums[r] - nums[l - 1];
    console.log(sum);
  }
};

function main() {
  nums = [1, 2, 3, 4, 5, 6];
  console.log(nums);
  nums = prefix(nums);
  console.log(nums);
  rangeSum(nums);
}

main();