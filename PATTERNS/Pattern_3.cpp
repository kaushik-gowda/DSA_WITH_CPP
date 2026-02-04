#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "enter the number: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {

        char ch = 'A';
        for(int j = 1; j <= n; j++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }    
    return 0;
}

// Sample Input/Output:
// enter the number: 4
// ABCD
// ABCD
// ABCD
// ABCD
