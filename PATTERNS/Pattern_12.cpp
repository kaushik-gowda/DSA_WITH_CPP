#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int m = 1;

    for (int i = 1; i <= n; i++) {
        
       for(int j = 1; j <= i; j++) {
            cout << m << " ";
            m++;
       }
        cout << endl;
       }
    return 0;
}

// Sample Input/Output:
// Enter the number of rows: 4
// 1
// 2 3
// 4 5 6
// 7 8 9 10