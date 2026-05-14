#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    bubbleSort(arr, n);
    return 0;
}

// This code implements the Bubble Sort algorithm to sort an array of integers. The `bubbleSort` function takes an array and its size as parameters, sorts the array in ascending order, and then prints the sorted array. The `main` function initializes an array with unsorted values and calls the `bubbleSort` function to sort it.
// output:
// Sorted array: 1 2 3 4 5