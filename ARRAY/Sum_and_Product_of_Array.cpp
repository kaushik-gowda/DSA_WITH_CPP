#include <iostream>
using namespace std;

void sum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum of the array: " << sum << endl;
}

void product(int arr[], int n) {
    int product = 1;
    for (int i = 0; i < n; i++) {
        product *= arr[i];
    }
    cout << "Product of the array: " << product << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter element :";
    for( int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sum(arr, n);
    product(arr, n);

    return 0;
}

// Output
// Enter the size of the array: 5
// Enter element :1 2 3 4 5
// Sum of the array: 15
// Product of the array: 120