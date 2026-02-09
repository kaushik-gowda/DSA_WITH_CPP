#include <iostream>
using namespace std;

int Factorial(int n) {
    int fact = 1;
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        for(int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
}

int main() {

    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int fact = Factorial(n);
    cout << "Factorial of " << n << " = " << fact;
}

// This program calculates the factorial of a given positive integer using an iterative approach. The function `Factorial` checks if the input number is negative, zero, or one, and returns the appropriate value. For numbers greater than one, it uses a for loop to multiply the numbers from 1 to n to calculate the factorial.