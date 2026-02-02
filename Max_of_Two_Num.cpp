#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the two numbers: ";
    cin >> num1 >> num2;

    int maxNum = (num1 > num2) ? num1 : num2;
    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}

// This program takes two integers as input and outputs the maximum of the two using the conditional (ternary) operator.