#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << "*";

        if(i != 0) {
            for(int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << " ";
        }
        cout << "*";

        for(int j = 0; j < 2 * (n - i - 2) - 1; j++) {
            cout << " ";
        }
        if(i != n-2) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// Sample Input/Output:
// Enter the number of rows: 4
//    *
//   * *
//  *   *
// *     *
// *     *
//  *   *
//   * *
//    *