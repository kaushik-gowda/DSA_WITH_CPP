#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << *p << endl; // Output: 5
    cout << **q << endl; // Output: 5
    cout << p << endl; // Output: 0x7ffd4a3b3b44
    cout << *q << endl; // Output: 0x7ffd4a3b3b44
    return 0;
}

