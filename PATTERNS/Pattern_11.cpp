#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = n; i > 0; i--) {

        for(int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }    
    return 0;
}

// Sample Input/Output:
// Enter the number of rows: 4
// 4 4 4 4
// 3 3 3
// 2 2
// 1