const bubbleSort = (arr) => {
  let n = arr.length;
  for (let i = 0; i < n; i++) {
    let swapped = false;
    for (let j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        // Swap
        let temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = true;
      }
    }
    // Already Sorted
    if (!swapped) {
      break;
    }
  }
};

function main() {
  let arr = [22, 1, 43, 53, 52, 7, 63, 9, 10];
  console.log(`Array Before Sorting: ${arr}`);
  bubbleSort(arr);
  console.log(`Array Before Sorting: ${arr}`);
}

main();

/** output
    Array Before Sorting: 22,1,43,53,52,7,63,9,10
    Array Before Sorting: 1,7,9,10,22,43,52,53,63
 */
