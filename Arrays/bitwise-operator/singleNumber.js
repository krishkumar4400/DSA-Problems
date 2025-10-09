const singNumber = (nums) => {
    // brute force approach
    let m = new Map();
    for(let val of nums) {
        m.set(val, (m.get(val) || 0) + 1);
    }

    for(let [key,value] of m) {
        if(value == 1) {
            return key;
        }
    }
    return -1;
}

const singNumberOptimal = (nums) => {
    let ans = 0;
    for(let val of nums) {
        ans ^= val;
    }
    return ans;
}

function main() {
    const nums = [8,1,2,1,2];
    // const ans = singNumber(nums);
    const ans = singNumberOptimal(nums);
    console.log(ans); // 8
}

main();