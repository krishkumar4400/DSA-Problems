const addDigits = (num) => {
    // if(num >= 0 && num <= 9) return num;
    // if(num % 9 == 0) return 9;

    // return num % 9;

    // using direct formula
    return num === 0 ? 0 : 1 + (num - 1) % 9;
}

function main() {
    num = 78;
    ans = addDigits(num);
    console.log(`Sum of the digits are: ${ans}`); // 6
}

main();