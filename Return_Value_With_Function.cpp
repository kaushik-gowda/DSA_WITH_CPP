#include <iostream>
using namespace std;

int ReturnValue() {
    cout << "Hello, World!" << endl;
    return 25;
}

int main() {
    int value = ReturnValue();
    cout << "Returned value: " << value << endl;

    return 0;
}

// Sample Output:
// Hello, World!
// Returned value: 25