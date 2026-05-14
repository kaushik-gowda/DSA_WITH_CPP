#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxallowedtime) {
    int painter = 1;
    int time = 0;

    for(int i = 0; i < n; i++) {
        if (arr[i] > maxallowedtime) {
            return false;
        }
        if(time + arr[i] <= maxallowedtime) {
            time += arr[i];
        }
        else {
            painter++;
            time = arr[i];
        }

        if(painter > m) {
            return false;
        }
    }
    return true;
}

int MintimetoPaint(vector<int> &arr, int n, int m) {
    int sum = 0, maxVal = INT_MIN;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal, end = sum;
    int ans = -1;

    while(st <= end) {
        int mid = (st + end) / 2;

        if(isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    cout << MintimetoPaint(arr, n, m) << endl;

    return 0;
}

// Painters Partition Problem is a binary search problem where we have to allocate boards to painters such that the maximum time taken by a painter is minimum. We can use binary search to find the optimal solution by checking if a given maximum time can be allocated to painters without exceeding the number of painters available.