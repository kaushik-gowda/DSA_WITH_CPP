#include <iostream>
using namespace std;

int main() {
    int P, R, T;
    cout << "Enter Principal amount: ";
    cin >> P;
    cout << "Enter Rate of Interest: ";
    cin >> R;
    cout << "Enter Time period: ";
    cin >> T;

    float SI = (P * R * T) / 100.0;
    cout << "Simple Interest: " << SI << endl;

    return 0;
}

// This program calculates the Simple Interest based on user input for Principal, Rate, and Time.