#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k = 0; k < n - i; k++) {
            cout << (i + 1);
        }
        cout << endl;
    }    
    return 0;
}

// Sample Input/Output:
// Enter the number of rows: 4
// 1111
//  222
//   33
//    4