#include <iostream>
using namespace std;

int SumOfDigits(int num) {
    int sum = 0;
    while(num > 0) {
        sum += num % 10; // Add the last digit to sum
        num /= 10; // Remove the last digit
    }
    return sum;
}

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = SumOfDigits(n);
    cout << "Sum of digits: " << result << endl;

    return 0;
}

// In this code, we have a function `SumOfDigits` that takes an integer parameter `num`. The function calculates the sum of the digits of the given number by repeatedly extracting the last digit using the modulus operator and adding it to a running total. The last digit is then removed by performing integer division by 10. This process continues until all digits have been processed. In the `main` function, we prompt the user to enter a number, call the `SumOfDigits` function with this number, and print the resulting sum of its digits. This demonstrates pass by value, where the value of `n` is passed to the function, and any changes to `num` inside the function do not affect `n`.