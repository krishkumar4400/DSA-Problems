const maximumPoints = (nums, k, n) => {
    let leftSum = 0;
    let rightSum = 0;
    let maxSum = 0;
    let rightIndex = n-1;

    for(let i = 0; i < k; i++) {
        leftSum += nums[i];
    }

    maxSum = leftSum;

    for(let i = k-1; i>= 0; i--) {
        leftSum -= nums[i];
        rightSum += nums[rightIndex];
        maxSum = Math.max(maxSum, leftSum + rightSum);
        rightIndex--;
    }
    return maxSum;
}

function main() {
    const nums = [1,2,33,1,3,7,2,3,90];
    const n = nums.length;
    const k = 3;
    const ans = maximumPoints(nums, k, n);
    console.log(ans); // 95
}

main();