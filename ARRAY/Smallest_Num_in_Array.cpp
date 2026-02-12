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
    int small = arr[0];
    for(int i = 0; i< size; i++) {
        if (arr[i] < small) {
            small = arr[i];
        }  
    }
    cout << "The smallest number in the array is: " << small << endl;

    return 0;
}

// This program prompts the user to enter the size of an array and then the integers that will populate the array. It then iterates through the array to find and display the smallest number.
// sample input: 5, 10, 20, 30, 40, 50
// sample output: 10