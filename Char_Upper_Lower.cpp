#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is uppercase." << endl;
    } else {
        cout << "The character is lowercase." << endl;
    }
    return 0;
}

// This code checks whether the input character is uppercase or lowercase based on its ASCII value.