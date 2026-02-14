#include <iostream>
using namespace std;

void swap(int arr[],int num){
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < num; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    // Swap min and max
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
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
    
    swap(arr, n);
    cout << "Array after swapping min and max elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// output
// Enter the size of the array: 5
// Enter element :1 2 3 4 5
// Array after swapping min and max elements: 5 2 3 4 1