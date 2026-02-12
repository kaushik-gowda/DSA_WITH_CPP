#include <iostream>
using namespace std;


int main() {

    int size = 5;
    int arr[size];

    cout << "Enter the integers: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "The integers you entered are: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}