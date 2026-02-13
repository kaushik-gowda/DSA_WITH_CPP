#include <iostream>
using namespace std;

void printUnique(int arr[], int num) {
    cout << "Unique elements in the array: ";
    for (int i = 0; i < num; i++) {
        bool isUnique = true;
        for (int j = 0; j < num; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
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
    printUnique(arr, n);

    return 0;
}

// output
// Enter the size of the array: 6
// Enter element :1 2 3 2 4 5
// Unique elements in the array: 1 3 4 5