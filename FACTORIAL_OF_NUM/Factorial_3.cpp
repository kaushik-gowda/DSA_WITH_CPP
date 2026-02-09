#include <iostream>
using namespace std;

int Factorial(int n) {
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * Factorial(n - 1);
    }
}

int main() {

    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int fact = Factorial(n);
    cout << "Factorial of " << n << " = " << fact;
}

// This program calculates the factorial of a given positive integer using recursion. The function `Factorial` checks if the input number is negative, zero, or one, and returns the appropriate value. For numbers greater than one, it recursively calls itself with the value decremented by one until it reaches the base case. 