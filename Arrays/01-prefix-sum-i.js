const prefix = (nums) => {
    for(let i = 1; i < nums.length; i++) {
        nums[i] += nums[i - 1];
    }
    return nums;
}

function main() {
    let nums = [1,2,4,3,5];
    console.log(nums);
    nums = prefix(nums);
    console.log(nums);
}

main();