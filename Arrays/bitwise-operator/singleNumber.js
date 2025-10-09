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

function main() {
    const nums = [4,1,2,1,2];
    const ans = singNumber(nums);
    console.log(ans); // 4
}

main();