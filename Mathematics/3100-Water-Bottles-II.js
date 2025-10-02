const maxBottleDrunk = (numBottles,numExchange) => {
    let ans = numBottles;

    while(numBottles >= numExchange) {
        numBottles = numBottles - numExchange + 1;
        ans++;
        numExchange++;
    }
    return ans;
}

function main() {
    let numBottles = 15;
    let numExchange = 3;
    let ans = maxBottleDrunk(numBottles, numExchange);
    console.log(`Maximum Bottles can drunk: ${ans}`); // 19
    return 0;
}

main();