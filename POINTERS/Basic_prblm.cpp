#include <iostream>
using namespace std;


int main() {
    int a = 10;
    int *ptr = &a;
    int **ptr2 = &ptr;
    cout << "The value of a is: " << a << endl;
    cout << "The address of a is: " << &a << endl;
    cout << "The value of ptr is: " << ptr << endl;
    cout << "The value of *ptr is: " << *ptr << endl;
    cout << "The address of ptr is: " << &ptr << endl;
    cout << "The value of ptr2 is: " << ptr2 << endl;
    cout << "The value of **ptr2 is: " << **ptr2 << endl;
    cout << "The address of ptr2 is: " << &ptr2 << endl;
    return 0;
}

// Output:
// The value of a is: 10
// The address of a is: 0x7ffd4a3b3b44
// The value of ptr is: 0x7ffd4a3b3b44
// The value of *ptr is: 10
// The address of ptr is: 0x7ffd4a3b3b48
// The value of ptr2 is: 0x7ffd4a3b3b48
// The value of **ptr2 is: 10
// The address of ptr2 is: 0x7ffd4a3b3b50