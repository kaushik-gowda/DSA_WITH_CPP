#include <iostream>
#include <vector>
using namespace std;

int BinarySearch(vector<int>& arr, int target, int st, int end) {
    if(st < end) {
        int mid = st + (end - st) / 2; // to avoid overflow
        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] < target) {
            return BinarySearch(arr, target, mid + 1, end);
        }
        else {
            return BinarySearch(arr, target, st, mid - 1);
        }
    }
    return -1;
}
int main() {

    vector<int> arr = {-1 , 0, 3, 4, 5, 9, 12};
    int target = 9;

    int ans = BinarySearch(arr, target, 0, arr.size() - 1);
    if(ans != -1) {
        cout << "Element found at index: " << ans << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}

// output: Element found at index: 5