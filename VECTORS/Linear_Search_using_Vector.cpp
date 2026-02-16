#include <iostream>
#include <vector>
using namespace std;

int LinearSearch(const vector<int>& arr, int target) {
    for(int i : arr) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1; // Target not found
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 5;

    int result = LinearSearch(arr, target); // Function call
    if(result == -1) {
        cout << "Target not found" << endl;
    } else {
        cout << "Target found at index: " << result << endl;
    }
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
// Output:
// Target found at index: 4