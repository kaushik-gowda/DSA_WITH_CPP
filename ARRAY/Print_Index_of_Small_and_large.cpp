#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter an integer: ";
    cin >> size;

    int arr[size];
    cout << "Enter the integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int small = INT_MAX;
    int large = INT_MIN;
    int small_index, large_index;

    for(int i = 0; i < size; i++) {
        if(arr[i] < small) {
            small = arr[i];
            small_index = i;
        }
        if (arr[i] > large) {
            large = arr[i];
            large_index = i;
        }
    }
    cout << "Smallest number Index: " << small_index << endl;
    cout << "Largest number Index: " << large_index << endl;
    return 0;
}

// This program prompts the user to enter the size of an array and then the integers that will populate the array. It then iterates through the array to find and display both the indices of the smallest and largest numbers.
// sample input: 5, 10, 20, 30, 40, 50
// sample output: Smallest number Index: 0, Largest number Index: 4