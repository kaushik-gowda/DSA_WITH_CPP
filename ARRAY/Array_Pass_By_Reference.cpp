#include <iostream>
using namespace std;

void ChangeArr(int arr[], int size) {
    cout << "Inside the function" << endl;
    for(int i = 0; i < size; i++) {
        arr[i] = 2 * arr[i];  
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {1, 2, 3};

    cout << "Inside the main function" << endl;
    for(int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    ChangeArr(arr, 3);

    return 0;
}

// Output:
// Inside the main function
// 1 2 3
// Inside the function
// 2 4 6
