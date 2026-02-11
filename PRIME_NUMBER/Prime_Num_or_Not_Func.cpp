#include <iostream>
using namespace std;

int IsPrime(int num) {
    bool isPrime = true;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool isPrime = IsPrime(num);

    if (isPrime) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}
// This program defines a function IsPrime to check if a number is prime and uses it in the main function to determine if the input number is prime or not.