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
  const target = 24;
  const ans = pairSumOptimal(nums, target);
  console.log(ans); // [ 3, 4 ]
}

main();