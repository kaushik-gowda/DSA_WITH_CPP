#include <iostream>
using namespace std;

int Factorial(int n) {
    int fact = 1;
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        for(int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
}

int BinomialCoefficient(int n, int r) {
    int fact_n = Factorial(n);
    int fact_r = Factorial(r);
    int fact_n_r = Factorial(n - r);
    return fact_n / (fact_r * fact_n_r);
}

int main() {
    int n, r;
    cout << "Enter n and r (n >= r): ";
    cin >> n >> r;

    int result = BinomialCoefficient(n, r);
    cout << "Binomial Coefficient C(" << n << ", " << r << ") = " << result;

    return 0;
}

// Output
// Enter n and r (n >= r): 5 2
// Binomial Coefficient C(5, 2) = 10