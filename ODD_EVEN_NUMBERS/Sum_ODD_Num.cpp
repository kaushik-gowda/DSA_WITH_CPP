#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    cout << "Sum of odd numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
}

// This program calculates the sum of all odd integers from 1 to a given positive integer N.