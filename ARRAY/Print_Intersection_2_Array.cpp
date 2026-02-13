#include <iostream>
using namespace std;

void printIntersection(int arr1[], int arr2[], int n, int m) {
    cout << "Intersection of the two arrays: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break; // To avoid printing duplicates
            }
        }
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr1[n];
    cout << "Enter element of array 1:";
    for( int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int arr2[n];
    cout << "Enter element of array 2:";
    for( int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    printIntersection(arr1, arr2, n, n);
    return 0;
}

// output
// Enter the size of the array: 5
// Enter element of array 1:1 2 3 4 5
// Enter element of array 2:3 4 5 6 7
// Intersection of the two arrays: 3 4 5