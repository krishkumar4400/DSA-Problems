// Brute-Force Approach using recursion and loops: 

#include<iostream>
using namespace std;

int addDigit(int num) {
    if(num == 0) return 0;
    string str = to_string(num);
    if(str.size() == 1) return stoi(str);

    int sum = 0;
    for(int i = 0; i<str.size(); i++) {
        sum += str[i] - '0';
    }
    return addDigit(sum);
}

// Optimal Solution Using Digital Root (If we find the sum of all digits of a number then the will is actually the digital root of that number):
int addDigit(int num) {
    if(num == 0) return 0;
    if(num % 9 == 0) return 9;

    return num % 9;
}

// Using Direct Formula: 
int addDigit(int num) {
    return 0 ? 0 : 1 + (num - 1) % 9;
}

int main() {
    int num = 129;
    int ans = addDigit(num);
    cout << "The Sum of all digits are: " << ans << endl; // 3
    return 0;
}


