#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    for(int i = size; i > 0; i--) {
        cout << arr[i-1] << " ";
    }
    return 0;
}