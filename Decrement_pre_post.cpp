#include <iostream>
using namespace std;

int main() {
    int a = 5;

    int b = --a; // Pre-decrement
    cout << "a: " << a << ", b: " << b << endl; // Output: a: 4, b: 4

    int q = 5;

    int p = q--; // Post-decrement
    cout << "q: " << q << ", p: " << p << endl; // Output: q: 4, p: 5

    return 0;
}

// This code demonstrates the difference between pre-decrement and post-decrement operators in C++.