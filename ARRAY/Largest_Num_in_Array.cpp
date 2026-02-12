#include <iostream>
using namespace std;


int main() {

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];

    cout << "Enter the integers: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int large = arr[0]; 
    for(int i = 0; i< size; i++) {
        if (arr[i] > large) {
            large = arr[i];
        }
    }
    cout << "The largest number in the array is: " << large << endl;

    return 0;
}

// This program prompts the user to enter the size of an array and then the integers that will populate the array. It then iterates through the array to find and display the largest number.
// sample input: 5, 10, 20, 30, 40, 50
// sample output: 50