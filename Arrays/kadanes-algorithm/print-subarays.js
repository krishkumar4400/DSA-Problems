const printSubArrays = (nums) => {
    const n = nums.length;

    for(let start = 0; start < n; start++) {
        for(let end = start; end < n; end++) {
            const subArrays = [];
            for(let i = start; i <= end; i++) {
                subArrays.push(nums[i]);
            }
            console.log(subArrays);
        }
    }
}

function main() {
    const nums = [1,2,3,4,5];
    printSubArrays(nums);
}

main();