#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a positive integer N: ";
    cin >> num;

    cout << "Printing numbers from 1 to " << num << ":\n";
    for (int i = 1; i <= num; i++) {
        cout << i << " ";
    }
    return 0;
}

// This code prints all integers from 1 to N, where N is a positive integer input by the user.