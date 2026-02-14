#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};

    int start = 0;
    int end = size - 1;

    reverseArray(arr, start, end);

    cout << "Reversed array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
// two pointer approach

// Output: Reversed array: 5 4 3 2 1