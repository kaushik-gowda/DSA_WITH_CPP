#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    int a = 10;
    int* ptr = &a;

    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;
    return 0;
}

// Output:
// 0x7ffd4a3b3b44
// 0x7ffd4a3b3b48