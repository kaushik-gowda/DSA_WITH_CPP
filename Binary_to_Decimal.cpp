#include <iostream>
using namespace std;

void BinarytoDecimal(int b) {
    int decimal = 0;
    int pow = 1;

    while(b > 0) {
        int rem = b % 10;
        decimal += rem * pow;
        b /= 10;
        pow *= 2;
    }
    cout << decimal << endl;
}

int main() {
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    BinarytoDecimal(binary);

    return 0;
}

// This program converts a binary number entered by the user into its decimal equivalent and displays it.

// sample input: 101
// sample output: 5