#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Odd numbers from 1 to " << n << " are: ";
    for (int i =0; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    return 0;
}

// This code prints all odd numbers from 1 to N, where N is a positive integer input by the user.