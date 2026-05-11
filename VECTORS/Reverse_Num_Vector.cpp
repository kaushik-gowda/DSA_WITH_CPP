#include <iostream>
#include <vector>
using namespace std;

void reverseNum(vector<int>& v) {
    int start = 0;
    int end = v.size() - 1;

    while(start < end) {
        swap(v[start], v[end]);
        start++;
        end--;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    reverseNum(arr);

    cout << "Reversed array: ";
    for(int i : arr) {
        cout << i << " ";
    } cout << endl;
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
// Output:
// Reversed array: 10 9 8 7 6 5 4