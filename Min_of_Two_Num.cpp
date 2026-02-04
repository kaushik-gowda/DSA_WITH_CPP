#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the two numbers: ";
    cin >> num1 >> num2;

    int minimum;
    if (num1 < num2) {
        minimum = num1;
    } else {
        minimum = num2;
    }
    cout << "Minimum of the two numbers is: " << minimum << endl;

    return 0;
}

// This program takes two integers as input and outputs the minimum of the two using an if-else statement.