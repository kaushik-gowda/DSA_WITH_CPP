#include <iostream>
using namespace std;

int main() {
    int n, sum =0;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    else {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }

        cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;
    }
    return 0;
}

// This program calculates the sum of all integers from 1 to a given positive integer N.