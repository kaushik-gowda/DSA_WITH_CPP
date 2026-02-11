#include <iostream>
using namespace std;

double SumofNumbers(int x, int y) {
    double s = x + y;
    return s;
}

int main() {
    int a, b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;

    int sum = SumofNumbers(a, b);
    cout << "Sum of the two numbers is: " << sum << endl;

    return 0;
}

// This program defines a function SumofNumbers that takes two integers as parameters, calculates their sum, and returns it as a double. The main function prompts the user to enter two numbers, calls the SumofNumbers function with those numbers, and then outputs the result.