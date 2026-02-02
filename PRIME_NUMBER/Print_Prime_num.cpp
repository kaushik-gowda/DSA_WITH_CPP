#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    bool isPrime;
    cout << "Prime numbers up to " << n << " are:" << endl;
    
    for (int i = 2; i <= n; i++) {
        isPrime = true;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }
    return 0;
}

// This program prints all prime numbers up to a given number n.