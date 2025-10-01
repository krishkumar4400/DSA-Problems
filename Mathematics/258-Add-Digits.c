#include<stdio.h>
#include<string.h>

int addDigits(int num) {
    char str[20]; // Buffer to hold string

    sprintf(str, "%d", num); // Convert int to string

    if(num == 0) return 0;
    if(num >= 0 && num <= 9) return num;

    int sum = 0;
    for(int i = 0; i < strlen(str); i++) {
        sum += (str[i] - '0');
    }
    return addDigits(sum);
}

int addDigits(int num) {
    if(num == 0) return 0;
    if(num % 9 == 0) return 9;

    return num % 9;
}

int addDigits(int num) {
    return num == 0 ? 0 : 1 + (num - 1) % 9;
}

int main() {
    int num = 80;
    int ans = addDigits(num);

    printf("The Sum of digits is: %d", ans); // 8
    return 0;
}