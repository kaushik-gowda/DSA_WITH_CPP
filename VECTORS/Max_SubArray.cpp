#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;
    vector<int> arr = {1, 2, 3, 4, 5};

    int maxSum = INT_MIN; // Initialize maxSum to the smallest possible integer value

    for(int st = 0; st < n; st++) {
        int curr_sum = 0; // Initialize sum for the current starting index
        for(int end = st; end < n; end++) {
            curr_sum += arr[end]; // Add the current element to the sum
            maxSum = max(maxSum, curr_sum); // Update maxSum if the current sum is greater
        }
    }
    cout << maxSum << endl;
    return 0;
}

// Output: 15
// working analysis of the code:
// 1, 3, 6, 10, 15
// 2, 5, 9, 14
// 3, 7, 12
// 4, 9
// 5
// maxSum = 15