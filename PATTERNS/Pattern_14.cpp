#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        
        char ch = 'A' + i - 1;
        for(int j = i; j > 0; j--) {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }    
    return 0;
}

// Sample Input/Output:
// Enter the number of rows: 4
// A
// B A
// C B A
// D C B A