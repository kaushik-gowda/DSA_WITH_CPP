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

    for(int i = 0; i < size; i++) {
        small = min(arr[i], small);
        large = max(arr[i], large);

    }
    cout << "Smallest number: " << small << endl;
    cout << "Largest number: " << large << endl;
    
    return 0;
}

// This program prompts the user to enter the size of an array and then the integers that will populate the array. It then iterates through the array to find and display both the smallest and largest numbers.
// sample input: 5, 10, 20, 30, 40, 50
// sample output: Smallest number: 5, Largest number: 50