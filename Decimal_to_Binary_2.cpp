#include <iostream>
using namespace std;

int decimalToBinary(int n) {
    int ans = 0, pow = 1;

    while(n > 0) {
        int rem = n % 2;
        n /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    decimalToBinary(n);
    cout << "Binary representation: " << decimalToBinary(n) << endl;
    
    return 0;
}

// This program takes a decimal number as input and converts it to binary. It calculates the binary representation by repeatedly dividing the number by 2 and storing the remainders, which represent the binary digits. The final binary number is constructed by multiplying the remainders by powers of 10 to place them in the correct position.
// sample input: 10
// sample output: Binary representation: 1010