// brute force approach
const powerOfTwo = (n) => {
    if(n <= 0) {
        return false;
    }

    while(n % 2 == 0) {
        n /= 2;
    }
    return n == 1;
}

// optimal approach -> bit manipulation
const powerOfTwoOptimal = (n) => {
    return n > 0  && (n & (n-1)) == 0;
}

function main() {
    const n = 8;
    console.log(powerOfTwo(n));
    console.log(powerOfTwoOptimal(n));
}

main();