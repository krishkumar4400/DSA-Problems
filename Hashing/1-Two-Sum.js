const twoSum = (arr,target,ans) => {
    for(let i = 0; i < arr.length; i++) {
        let first = arr[i];
        for(j = i + 1; j < arr.length; j++) {
            let second = arr[j];
            if(first + second === target) {
                ans.push(i);
                ans.push(j);
                return ans;
            }
        }
    }
    return [];
}

const twoSumOptimal = (nums, target) => {
    const map = new Map(); // value -> index
    for(let i = 0; i < nums.length; i++) {
        const complement = target - nums[i];
        if(map.has(complement)) {
            return [map.get(complement),i]; // found the pair
        }
        map.set(nums[i], i); // Store current value and index
    }
    return [];
}

function main() {
    const arr = [2,7,11,15];
    let target = 9;
    let ans = twoSum(arr,target,[]);
    console.log(ans);

    let ansOptimal = twoSumOptimal(arr,target);
    console.log(ansOptimal);
}

main();