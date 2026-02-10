#include <iostream>
using namespace std;

int decimalToBinary(int n) {
    int binary[32]; // Assuming a maximum of 32 bits for the binary representation
    int i = 0;
    while(n > 0) {
        binary[i] = n % 2;
        n = n/ 2;
        i++;
    }
    cout << "Binary representation: ";
    for(int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    cout << endl;
    return 0;
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    decimalToBinary(n);
    return 0;
}

// This program takes a decimal number as input and converts it to binary. It uses an array to store the binary digits and then prints them in reverse order to display the correct binary representation.

// sample input: 10
// sample output: Binary representation: 1010