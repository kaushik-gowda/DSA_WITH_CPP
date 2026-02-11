#include <iostream>
using namespace std;

int SumofNumbers(int x) {
    int s = 0;
    for (int i = 1; i <= x; i++) {
        s += i;
    }
    return s;
}

int main() {

    int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    sum = SumofNumbers(n);
    cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
}

// This program calculates the sum of all integers from 1 to a given positive integer N using a function.