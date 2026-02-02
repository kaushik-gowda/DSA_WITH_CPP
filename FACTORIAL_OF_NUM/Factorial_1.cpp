#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }
    else if (n == 0) {
        cout << "Factorial of 0 is 1." << endl;
    }
    else {
        int factorial = 1;
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " is " << factorial << endl;
    }
    return 0;
}

// This program calculates the factorial of a given positive integer using for loop method.
