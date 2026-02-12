#include <iostream>
using namespace std;


int main() {

    int arr1[5] = {1, 2, 3, 4, 5}; // Array initialization

    arr1[0] = 10; // Modifying the first element of the array

    cout << "Array elements are: ";
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }

    double arr2[3] = {1.1, 2.2, 3.3}; // Array initialization with double
    char arr3[4] = {'a', 'b', 'c', 'd'}; // Array initialization with char

    return 0;
}

// Output: Array elements are: 10 2 3 4 5