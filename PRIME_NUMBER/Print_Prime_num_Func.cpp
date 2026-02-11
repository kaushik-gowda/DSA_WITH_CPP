#include <iostream>
using namespace std;

void IsPrime(int num) {
    bool isPrime;
    for (int i = 2; i <= num; i++) {
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
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " are:" << endl;
    IsPrime(n);

    return 0;
}

// This program defines a function IsPrime to print all prime numbers up to a given number n and uses it in the main function to display the prime numbers.
// sample input: 20
// sample output: 2 3 5 7 11 13 17 19