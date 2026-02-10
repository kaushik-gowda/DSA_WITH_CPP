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

    for(int i = 1; i <= n; i++) {
        cout << "Binary representation of " << i << " is: " << decimalToBinary(i) << endl;
    }

    return 0;
}

// This program converts decimal numbers from 1 to n into their binary representation and displays them.

// sample input: 5
// sample output:
// Binary representation of 1 is: 1
// Binary representation of 2 is: 10
// Binary representation of 3 is: 11
// Binary representation of 4 is: 100
// Binary representation of 5 is: 101