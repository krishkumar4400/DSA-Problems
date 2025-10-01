const waterBottles = (numBottles, numExchange) => {
    let ans = 0;
    let emptyBottles = 0;

    while(numBottles > 0) {
        ans += numBottles;
        emptyBottles += numBottles;
        numBottles = 0;
        
        if(emptyBottles >= numExchange) {
          numBottles = Math.floor(emptyBottles / numExchange); //integer division
          emptyBottles = emptyBottles % numExchange;
        }
    }
    return ans;
}

function main() {
    let numBottles = 15;
    let numExchange = 4;

    let ans = waterBottles(numBottles, numExchange);
    console.log(`Total Drunk Water Bottles: ${ans}`); // 19
}

main();