#include <iostream>
using namespace std;

int main() {
    int a = 5;

    int b = ++a; // Pre-increment
    cout << "a: " << a << ", b: " << b << endl; // Output: a: 6, b: 6
    
    int p = 5;
    
    int q = p++; // Post-increment
    cout << "p: " << p << ", q: " << q << endl; // Output: p: 6, q: 5

    return 0;
}

// This code demonstrates the difference between pre-increment and post-increment operators in C++.